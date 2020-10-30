#include <iostream>
using namespace std;
int main()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    int x=q-p+1;
    int y=s-r+1;
    int a[x*y][2];
    int z=0;
    for(int i=p;i<=q;i++)
    {
        for(int j=r;j<=s;j++)
        {
            a[z][0]=i;
            a[z][1]=j;
            z++;
        }
    }
    int sum=0;
    for(int i=0;i<x*y;i++)
    {
        while((a[i][0]!=0) ||(a[i][1]!=0))
        {
            if(a[i][0]>a[i][1])
            {
                a[i][0]-=a[i][1];
                sum++;
            }
            else if(a[i][0]<a[i][1])
            {
                a[i][1]-=a[i][0];
                sum++;
            }
            else if(a[i][0]==a[i][1])
            {
                a[i][0]=0;
                a[i][1]=0;
                sum++;
            }
        }
    }
    cout<<sum;
}
