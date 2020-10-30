#include <bits/stdc++.h>
typedef unsigned long long int uii;
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    int a[n],b[n],c[n],d[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        d[i][0]=a[i];
        d[i][1]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
            b[i]=a[i+1]-a[i];
        else if(i==(n-1))
            b[i]=a[i]-a[i-1];
        else
            b[i]=min((a[i]-a[i-1]),((a[i+1]+a[i])));
        c[i]=b[i];
    }
    sort(c,c+n);
    for(int i=0;i<t;i++)
    {
        
        auto it=find(a,a+n,c[n-i-1]);
        if(it!=end(b))
        {
            int x=distance(a,it);
            d[x][1]=1;
        }
    }
    uii sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            for(int j=i;j<n;j++)
            {
                if(d[j][1]==1)
                {
                    sum+=d[j][0]-d[i][0];
                    break;
                }
            }
        }
        else if(i==(n-1))
        {
            for(int j=i;j>0;j--)
            {
                if(d[j][1]==1)
                {
                    sum+=d[j][0]-d[i][0];
                    break;
                }
            }
        }
        else
        {
            int y=0,z;
            for(int j=i;j<n;j++)
            {
                if(d[j][1]==1)
                {
                    y=d[j][0]-d[i][0];
                    break;
                }
            }
            for(int j=i;j>0;j--)
            {
                if(d[j][1]==1)
                {
                    z=d[j][0]-d[i][0];
                    break;
                }
            }
            sum+=min(y,z);
        }
    }
    cout<<sum;
    return 0;
}