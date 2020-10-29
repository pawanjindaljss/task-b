#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
#ifndef MAX
#define MAX 1000000007
#endif

map<int, long long int> Fib;
std::map<int, long long int>::iterator it;


int mid(long long int s, long long int e) {  return s + (e -s)/2;  }

long long int fib(int n){
    it = Fib.find(n);
    if(it!=Fib.end())
        return Fib[n];
    if(n%2==0){
        int k=n/2;
        long long int fibk = fib(k);
        Fib[n] = ((2*fib(k-1) + fibk)*fibk)%MAX;
        return Fib[n]; 
        
    }
    else{
        long long int k=(n+1)/2;
        Fib[n] = (fib(k-1)*fib(k-1))%MAX + (fib(k)*fib(k))%MAX;
        return Fib[n];
    }
}

int gcd(int a, int b){
    if(!a)
        return b;
    return gcd(b%a, a);
}
 
int getgcd(int *st,int ss, int se, int qs, int qe, int si)
{
if (qs <= ss && qe >= se)
        return st[si];

    if (se < qs || ss > qe){
        return -1;}
    int m = mid(ss, se);
    int l,r;
    l = getgcd(st, ss, m, qs, qe, 2*si+1);
    r = getgcd(st, m+1, se, qs, qe, 2*si+2);
    // printf("%d %d %d %d \n",ss, se, l, r);
    
    if(l==-1)
        return r;
    else if(r==-1)
        return l;
    return gcd(l,r);
}

int maketree(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int m = mid(ss, se);
    st[si] =  gcd(maketree(arr, ss, m, st, si*2+1),
              maketree(arr, m+1, se, st, si*2+2));
    return st[si];
}
 
int main()
{
    Fib[0]=(long long int)(0);Fib[1]=(long long int)(1);Fib[2]=(long long int)(1);
    int i,n,q,l,r;
    scanf("%d %d",&n, &q);
    int a[n];
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    int x = (int)(ceil(log2(n))); 

    int max_size = 2*(int)pow(2, x) - 1; 
 
    int *st = new int[max_size];
    
    maketree(a, 0, n-1, st, 0);

    for(i=0;i<q;i++){
        scanf("%d %d",&l, &r);
        printf("%d\n", (int)(fib(getgcd(st, 0, n-1, l-1, r-1, 0))%MAX));
    }
    return 0;
}