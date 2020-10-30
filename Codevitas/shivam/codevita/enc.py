import math
def isprime(n):
	if n == 2 or n == 3:
		return True
	if n == 1:
		return False
	if n%2 == 0 or n % 3 == 0:
		return False
	s=1;
	while s*s <= n:
		s+=1
	s-=1
	i=1
	while 6*i-1 <= s:
		if n%(6*i-1)==0 or n%(6*i+1)==0:
			return False
		i+=1
	return True

def numtobin(num):
	bintext = ""
	bits=math.floor(math.log(num,2))+1
	currentnum=num
	i=0
	while i < bits:
		bintext = str(int(currentnum)%2) + bintext
		currentnum=math.floor(currentnum/2)
		i+=1
	return bintext

def mymod(a,b):
	return a-math.floor(a/b)*b

def fastmod(a,b,c):
	binB= numtobin(b)
	Bdigits = len(binB)
	AtoBmodC = [0]*Bdigits
	power = 1
	product = 0
	line = ""
	i=0
	while i < Bdigits:
		if i==0:
			AtoBmodC[0]= mymod(a,c)
		else :
			AtoBmodC[i]= mymod(AtoBmodC[i-1]*AtoBmodC[i-1],c)
		if binB[Bdigits-1-i] == '1':
			if product == 0:
				product  = AtoBmodC[i]
			else :
				product *= AtoBmodC[i]
			product=mymod(product,c)
		power *=2
		i+=1
	result=mymod(product,c)
	return result
# # s = input()
f = open('a.txt','r')
n = int(f.readline())
for i in list(range(n)):
	a = f.readline().split()
	if isprime(int(a[2])):
		print(int(fastmod(int(a[0]),int(a[1]),int(a[2]))%10))
	else :
		print("-1")
f.close()