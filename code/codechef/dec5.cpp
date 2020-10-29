#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
#define tam_pop 5
#define tam_genes 8
#define elitismo 0.6
#define prob_mut 0.1
#define prob_cruz 0.9
typedef long long int ll;
ll fact[100001];
int n,i,a,b,c,d;
// comparison operation is faster than division operation. 
    // So using following instead of "return num / 10 == 0;" 
bool possible(int x)
{
    float p = (x+a-c)/2.0;    
    float q = (x-a+c)/2.0;
    if(floor(p) != ceil(p) || p < 0) 
        return false;
    if(floor(q) != ceil(q) || q < 0) 
        return false;
    if(a-p < 0 || d-p < 0) 
        return false;
    return true;
}
// comparison operation is faster than division operation. 
    // So using following instead of "return num / 10 == 0;" 
ll power(ll a, ll b)
{
    ll res = 1;
    
    while(b > 0)
    {
        if(b & 1)
            res = (res * a)%m;           
        a = (a*a)%m;
        b >>= 1;
    }
    return res%m;
}
// comparison operation is faster than division operation. 
    // So using following instead of "return num / 10 == 0;" 
ll modInv(int N)
{
    return power(N,m-2);    
}
ll comb(int x)
{
    if(x == 0) 
        return 1;
    return ((fact[n]*modInv(fact[x]))%m*modInv(fact[n-x]))%m;
}

int main() 
{
    fact[0] = 1;
    for(int i=1; i<=100000; i++)
        fact[i] = (i*fact[i-1])%m;
    int t;
    cin >> t;
    while(t--)
    {
        string A,B;
        cin >> n >> A >> B;
        a = 0,c = 0;
        for(i=0; i<n; i++)
        {
            if(A[i] == '1')
                a++;       
            if(B[i] == '1')
                c++;
        }
        b = n-a; d = n-c;
        ll ans = 0;
        for(int x=0; x<=n; x++)
            if(possible(x))
                ans = (ans + comb(x))%m;     
        cout << ans << endl;
    }
    return 0;
}
