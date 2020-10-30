s = input().split(',')

def ispalin(a):
	return str(a) == str(a)[::-1]

a = []

for i in list(range(int(s[0]),int(s[1])+1)):
	if ispalin(i):
		a += [i]

if not a:
	print("0,0,0")
else :
	m = 999999999
	ind  = -1
	for i in list(range(len(a)-1)):
		temp = a[i+1]-a[i]
		if temp < m :
			m = temp
			ind = i
	
	else :
		print('0,0,0')