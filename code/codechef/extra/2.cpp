//https://www.codechef.com/OCT19B/problems/SAKTAN
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        int x[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                x[i][j]=0;
        int a[q+1],b[q+1];
        a[q]=-1;
        b[q]=-1;
        for(int i=0;i<q;i++)
            cin>>a[i]>>b[i];
        sort(a,a+q);
        sort(b,b+q);
        int co=0;
        for(int i=0;i<q;i++)
        {
            co++;
            if(a[i]!=a[i+1])
            {
                for(int j=0;j<m;j++)
                    x[a[i]-1][j]=x[a[i]-1][j]+co;
                co=0;
            }
        }
        co=0;
        for(int i=0;i<q;i++)
        {
            co++;
            if(b[i]!=b[i+1])
            {
                for(int j=0;j<n;j++)
                    x[j][b[i]-1]=x[j][b[i]-1]+co;
                co=0;
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(x[i][j]%2==1)
                    count++;
        }
        cout<<count<<endl;
    }
	return 0;
}