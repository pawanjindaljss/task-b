#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int s=1,ss=1;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int i=k;i<n;i++)
            if(a[i]==a[k-1])
                count++;
        for(int i=k+count;i>k;i--)
            s*=i;
        for(int i=count;i>1;i--)
            ss*=i;
        cout<<count<<" "<<k+count<<" "<<s<<" "<<ss<<" "<<s/ss<<endl;
    }
}