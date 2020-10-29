#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define popb pop_back()
#define forl(i,a,n) for(int i=a;i<n;i++)
#define rfor(i,n,a) for(int i=n;i>=a;i--)
#define fore(i,a,n) for(int i=a;i<=n;i++)
ll mod=1e9+7;
ll power(ll num,ll r)
{
    if(r==0) 
        return 1;
    if(r==1) 
        return num%mod;
    ll ans=power(num,r/2)%mod;
    if(r%2==0) 
        return (ans*ans)%mod;
    return (((ans*ans)%mod)*num)%mod;
}
ll modinv(ll num)
{
    return power(num,mod-2);
}
int findset(int arr[], int x){
    if(x!=arr[x]){
        arr[x]=findset(arr,arr[x]);
    }
    return arr[x];
}
void uni(int arr[],int ranks[],int a,int b){
    int ra=findset(arr,a);
    int rb=findset(arr,b);
    if(ra!=rb){
        if(ranks[ra]<ranks[rb]) swap(ra,rb);
        arr[rb]=ra;
        if(ranks[ra]==ranks[rb]){
            ranks[ra]++;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        vector<int> v[26];
        forl(i,0,n)
            v[s[i]-'a'].pb(i);
        int mi=n;
        forl(i,0,26)
            forl(j,1,v[i].size())
                mi=min(mi,v[i][j]-v[i][j-1]);
        if(mi!=n) cout<<n-mi<<endl;
        else cout<<0<<endl;
    }
    return 0;
}