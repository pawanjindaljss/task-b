n = input()
l = len(n)
if not '.' in n:
	n+='.0'
l = len(n)
temp = n.index('.')
if l-temp < 6:
	n += '0'*(6-(l-temp-1))
if temp%2 != 0:
	n = '0'+n
divs = '0'
dvnd = '0'
quo = ''
remain = '0'
summ = "0"
l=len(n)
i = 0
while i < l:
	divs = summ[:]
	if n[i] == '.':
		if(i == 0):
			quo += '0'
		quo += '.'
		i+=1
	temp = int(remain)*100 + int(n[i:i+2])
	# dvnd = int(remain)*100+temp
	x = 0
	while (int(divs)*10+x)*x <= temp:
		x+=1
	x-=1
	quo += str(x)
	remain = temp - (int(divs)*10+x)*x
	divs += str(x)
	summ = str(int(divs) + int(x))
	if float(quo)**2 == float(n):
		if "." in quo:
		 	temp = quo.index('.')
		 	if len(quo)-temp < 3:
		 		quo += '0'*(3-(len(quo)-temp-1))
		else:
			quo += '.000'
		break
	i+=2

print(temp,divs,quo,remain,summ)