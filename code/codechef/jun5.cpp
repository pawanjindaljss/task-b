#include <algorithm>
#include <iterator>
#include <iostream>
#include <sstream>
#include <bitset>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <time.h>
#include <limits>
#include <math.h>
#include <climits>
#include <numeric>
#include <utility>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <functional>
#include<unordered_map>
//#include<bits/stdc++.h>
//#include <ext/pb_ds/detail/standard_policies.hpp>
 
const double pi=acos(-1.0);
//memset ( a , 0 , n * sizeof(ll) ) ;
using namespace std;
//using namespace __gnu_pbds; 
#define   endl    '\n'
#define   sl(n)     scanf("%lld",&n)
#define   mp      make_pair
#define   pb      push_back
#define   ppb     pop_back
#define   fi      first
#define   se      second
#define   ll      long long
#define   ull     unsigned long long
#define   pii     pair<int, int>
#define   f(i,a,b)  for(ll i = (ll)(a); i < (ll)(b); i++)
#define   rf(i,a,b)   for(ll i = (ll)(a); i > (ll)(b); i--)
#define   ms(a,b)   memset((a),(b),sizeof(a))
#define   vec(g1)   int temp;cin>>temp;g1,push_back(temp);
#define   abs(x)    ((x<0)?(-(x)):(x))
#define   MAX     1000007
#define   inf     LLONG_MAX
#define   MIN     INT_MIN
#define   yeet    return 0;
#define fast_io ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// Use cout.flush() for interactive problems.
// Use this for increased stack size: g++ -o a.exe -Wl,--stack=256000000 -O2 source.cpp
inline long long  MAX2(long long  a, long long  b){return (a)>(b)?(a):(b);}
inline long long  MAX3(long long  a, long long  b,long long  c){return (a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c));}
inline long long  MIN2(long long  a, long long  b){return (a)<(b)?(a):(b);}
inline long long  MIN3(long long  a, long long b,long long c){return (a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c));}
 
//typedef
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
 
 
int mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}
ll powmod(ll a,ll b) {ll res=1;if(a>=mod)a%=mod;for(;b;b>>=1){if(b&1)res=res*a;if(res>=mod)res%=mod;a=a*a;if(a>=mod)a%=mod;}return res;}
uint32 setbits(ll n){uint32 count=0;while (n){n&=(n-1);count++;}return count; } 
int modInverse(int A,int M){return powmod(A,M-2);}
 
 // ll fac[200005];
// ll inverse(ll n){return powmod(n, mod-2);}
// ll nCr(ll n, ll r){return (fac[n] * inverse(fac[r]) % mod * inverse(fac[n-r]) % mod) % mod;}
//const int N= 10000000;int lp[N+1];vector<int> pr;void seive(){for (int i=2; i<=N; ++i) {if (lp[i] == 0) {lp[i] = i;pr.push_back (i);}for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j) lp[i * pr[j]] = pr[j]; }}
////****************************************************************************************************************************************************************************************************************////
 
// void fill(){
//   fac[0] = 1;
//   for(int i = 1; i < MAX; i++){
//     fac[i] = (fac[i - 1] * i) % mod;
//   }
// }
ll factorial[100007];
ll invfact[100007];
ll invofnum[100007];
ll pow2[100007];

//const int N= 10000000;int lp[N+1];vector<int> pr;void seive(){for (int i=2; i<=N; ++i) {if (lp[i] == 0) {lp[i] = i;pr.push_back (i);}for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j) lp[i * pr[j]] = pr[j]; }}
////****************************************************************************************************************************************************************************************************************////
 void init(){
  factorial[0] = 1;
        factorial[1] = 1;

        pow2[0] = 1;
        pow2[1] = 2;

        invofnum[0] = 1;
        invofnum[1] = 1;

        invfact[0] = 1;
        invfact[1] = 1;

        for (int i = 2; i < 100007; i++) {
            factorial[i] = (i * factorial[i - 1]) % mod;
            pow2[i] = (2 * pow2[i - 1]) % mod;
            invofnum[i] = ((mod - (mod / i)) * invofnum[mod % i]) % mod;
            invfact[i] = (invofnum[i] * invfact[i - 1]) % mod;
        }
 }
 void chefpsa(ll a[],int n){
 	ll sum=0; // out
  unordered_map<ll, ll> m1;
  f(i,0,2*n){
    sum += a[i];
    // if(!m1.count(a[i])){
    //   m1.insert({a[i], 1});
    // }
    // else{
    //   m[a[i]]++;
    // }
     m1[a[i]]++;
  }
  ll mainsum = sum/(n + 1);
  if(m1[mainsum] < 2){cout<<0<<endl; return;}
  m1[mainsum] -= 2;
  vector<ll> dist;
  vector<ll> rep;
  bool pos = 1;
  for(auto x:m1){
    ll key = x.fi;
    ll val = x.se;
    if(x.se!= 0){
    if(x.fi == (mainsum/2) and mainsum % 2 == 0){
      if(x.se % 2){
      	 cout<<0<<endl;
        pos = false;
       break;
      }
      else rep.pb(x.se/ 2);
    }
    else if(x.se == m1[mainsum - x.fi]){
      m1[mainsum - x.fi] -= x.se;
      dist.pb(x.se);
    }
    else{ cout<<0<<endl;
      pos = false;
      break;
    }
  }
}
  if(pos){
    ll denom = 1;
    ll num = factorial[n - 1];
    f(i,0,dist.size())denom = (denom%mod  * factorial[dist[i]]%mod) % mod;
    f(i,0,rep.size()){
      denom = (denom%mod * factorial[rep[i]]%mod) % mod;
    }
    num = (num * powmod(denom,mod-2)) % mod;
    f(i,0,dist.size()){
      num = (num%mod  * powmod(2, dist[i])%mod) % mod;
    }
    cout<<num<<endl;
  }
 }
int main(){
    fast_io;
   int t;
   cin>>t;

  init();
  while(t--){
  ll n;
  cin >> n;
  ll a[2 * n];
  f(i,0,2*n)cin>>a[i];
   chefpsa(a,n);

}
}