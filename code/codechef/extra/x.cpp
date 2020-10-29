# your code goes here
t = int(input())
while t:
	t = t-1
	n,m = input().split()
	n = int(n)
	m = int(m)
	
	p = [int(i) for i in input().split()]
	l = [[0]*(n//m) for _ in range(m)]
	
	for i in range(n):
		l[i%m][i//m] = p[i]
	
	minp = []
	maxp = []
	for i in range(m):
		minp.append(min(l[i]))
		maxp.append(max(l[i]))
	
	val_min, idx_min = min((val, idx) for (idx, val) in enumerate(minp))
	val_max, idx_max = max((val, idx) for (idx, val) in enumerate(maxp))
	
	minp2 = [minp[i] for i in range(len(minp)) if i!=idx_max]
	maxp2 = [maxp[i] for i in range(len(maxp)) if i!=idx_min]
	
	result = min(val_max - min(minp2), max(maxp2) - val_min)
	
	print(result)