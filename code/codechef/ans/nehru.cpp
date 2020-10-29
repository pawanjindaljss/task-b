//https://www.codechef.com/FFC22019/problems/FFC219C
#include <bits/stdc++.h>
typedef long long ll;
#define int ll

using namespace std;

const int N=1e5+100;

string s[N];
int sum[N];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    sort(s+1,s+n+1);
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+s[i].size();
    int q;
    cin>>q;
    while(q--)
    {
        string t;
        cin>>t;
        int l=lower_bound(s+1,s+n+1,t)-s;
        int r=lower_bound(s+1,s+n+1,t+'z')-s;
        if(l==r)
            cout<<-1<<"\n";
        else
            cout<<sum[r-1]-sum[l-1]-t.size()*(r-l)<<" "<<s[l]<<" "<<s[r-1]<<"\n";
    }
}
