import sys
t=int(input())
for sss in range(t):
    m=list(map(int,sys.stdin.readline().split()))
    N=m[0]
    k=m[1]
    l=list(map(int,sys.stdin.readline().split()))
    maxx=l.index(max(l))
    if maxx==N-1:
        print(l[N-1])
    else:
        x=(l[maxx]-l[maxx+1])//2
        if x>k:
            x=k
        l[maxx+1]=l[maxx+1]+x
        l[maxx]=l[maxx]-x
        print(max(l))