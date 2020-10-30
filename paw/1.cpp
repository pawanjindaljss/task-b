#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],count=0;
        unsigned long long int sum=0,x;
        float y,z;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        z=float(sum/n);
        for(int i=0;i<n;i++)
        {
            x=sum-a[i];
            y=float(x/(n-1));
            if(z==y)
            {
                count=i+1;
                break;
            }
        }
        if(count>0)
            cout<<count<<endl;
        else
            cout<<"Impposible"<<endl;
    }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        float a[n];
        float x,s,y;
        int count=0,z;
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>z;
            a[i]=float(z);
            sum+=a[i];
        }
        s=float(sum/n);
        for(int i=0;i<n;i++)
        {
            x=float((sum-a[i])/(n-1));
            if(x==s)
            {
                count=a[i];
                break;
            }
        }
        if(count==0)
            cout<<"Impossible"<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}