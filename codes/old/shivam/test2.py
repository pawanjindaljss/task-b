# from itertools import combinations


# def findRact(input1,input2, input3, input4,input5):
# 	result,z=999999999,list(combinations(input5,input4))
# 	lz=len(z)
# 	peri=[0]*lz
# 	for i in xrange(lz):
# 		p0,q0=min(z[i],key=lambda f:f[0])[0],min(z[i],key=lambda f:f[1])[1]
# 		q1,p1=max(z[i],key=lambda f:f[1])[1],max(z[i],key=lambda f:f[0])[0]
# 		peri[i]=2*(p1-p0+2+q1-q0)
# 	minn=min(peri)
# 	t=[i for i in xrange(lz)if peri[i]==minn]
# 	lt=len(t)
# 	for i in xrange(lt):
# 		p=z[t[i]]
# 		newa=[input5[j] for j in xrange(input3) if not input5[j] in p]
# 		q=list(combinations(newa, input4))
# 		ln=len(q)
# 		g=[0]*ln
# 		for j in xrange(ln):
# 			p0,q0 = min(q[j],key=lambda f:f[0])[0],min(q[j],key=lambda f:f[1])[1]
# 			p1,q1 = max(q[j],key=lambda f:f[0])[0],max(q[j],key=lambda f:f[1])[1]
# 			g[j]=2*(p1-p0+q1-q0+2)
# 		result=min(result,min(g)+peri[t[i]])
# 	return result

# print findRact(6, 5, 7, 3, [(3,4), (3,3), (6,1), (5,5), (5,5), (3,1), (1,1)])

from heapq import heappush, heappop

def GetWaterLevel(input1,input2,input3):
	heightMap = [[0]*input2 for i in xrange(input1)]
	c=0
	for i in xrange(input1):
		for j in xrange(input2):
			heightMap[i][j]=input3[c]
			c+=1
	m = len(heightMap)
    if not m:
        return 0
    n = len(heightMap[0])
    if not n:
        return 0

    is_visited = [[False for i in xrange(n)] for j in xrange(m)]
    
    heap = []
    for i in xrange(m):
        heappush(heap, [heightMap[i][0], i, 0])
        is_visited[i][0] = True
        heappush(heap, [heightMap[i][n-1], i, n-1])
        is_visited[i][n-1] = True
    for j in xrange(n):
        heappush(heap, [heightMap[0][j], 0, j])
        is_visited[0][j] = True
        heappush(heap, [heightMap[m-1][j], m-1, j])
        is_visited[m-1][j] = True

    trap = 0
    while heap:
        height, i, j = heappop(heap)
        for (dx, dy) in [(1,0), (-1,0), (0,1), (0,-1)]:
            x, y = i+dx, j+dy
            if 0 <= x < m and 0 <= y < n and not is_visited[x][y]:
                trap += max(0, height - heightMap[x][y])
                heappush(heap, [max(height, heightMap[x][y]), x, y])
                is_visited[x][y] = True

    return trap