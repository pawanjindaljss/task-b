#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n-2],c[n-2];
        int x=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-2;i++)
        {
            b[x]=a[i]+a[i+2];
            c[x]=a[i+2]*10+a[i];
        }
        for(int i=0;i<n-2;i++)
        {
            
        }
    }
    return 0;
}