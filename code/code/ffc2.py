def f(n):
    s=((3*(n**5))+(30*(n**4))+(105*(n**3))+(150*(n**2))+72*n)//15
    return s
t=int(input())
for i in range(t):
    s=0
    l,r=map(int,input().split())
    a=f(l-1)
    b=f(r)
    #print(a)
    #print(b)
    s=b-a
    print(s%1000000007)





https://www.codechef.com/FFC22019/problems/FFC219B
