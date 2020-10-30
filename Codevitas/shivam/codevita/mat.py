l = int(input())
b = int(input())
a =[]
for i in list(range(l)):
	a += [''.join(input().split())]
pat = input()
le = len(pat)
count = 0
for i in list(range(l)):
	for j in list(range(len(a[i])-le+1)):
		if a[i][j:j+le] == pat :
			count += 1
for i in list(range(b)):
	s = ""
	for j in list(range(l)):
		s += a[j][i]
	for j in list(range(len(s)-le+1)):
		if s[j:j+le] == pat :
			count += 1
s = ""
for i in list(range(min(l,b))):
	s += a[i][i]
for j in list(range(len(s)-le+1)):
	if s[j:j+le] == pat :
		count += 1
print(count)