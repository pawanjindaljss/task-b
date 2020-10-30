l =input().split()
s = l[1]
l = int(l[0])
i = 0
count = 0
while (i < l):
	if i == l-1:
		break
	if s[i] == 'R' and i != l-1:
		count += 1
		i+=1
	elif s[i] == 'G':
		while (i < l and s[i] == 'G'):
			i+=1
		if i == l:
			break
		else :
			count += 1
print(count)
