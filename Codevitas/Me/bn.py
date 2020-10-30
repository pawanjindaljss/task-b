import sys
n=int(input())
a=list(map(int,sys.stdin.readline().split()))
maxx=0
temp=0
a.sort()
for i in range(n-1):
    temp=temp+1
    if a[i]!=a[i+1]:
        if maxx<temp:
            maxx=temp
        temp=0
print(maxx)