#include <bits/stdc++.h>
using namespace std;
int coin=1000;
int main() 
{
    int n,c,coin=1000;
    cin>>n>>c;
    int x=n/2;
    cout<<1<<" "<<x<<endl;
    int t;
    cin>>t;
    coin--;
    if(t==1)
    {
        cout<<2<<endl;
        coin-=c;
        int z=bs(1,x,c)
    }
    else
    {
        int z=bd(x,n,c);
    }
    return 0;
}
int bs(int min, int max,int co) 
{ 
    int a=(max+min)/2;
    cout<<"1"<<" "<<a<<endl;
    int t;
    cin>>t;
    if(t==1)
    {
        cout<<2<<endl;
        coin-=co;
        return bs(1,a,co);
    }
    if(t==0)
    {
        return bsbs(a,max,co);
    } 
}
int bsbs(int min,int max,co)
{
    int d;
    while(min<=max)
    {
        cout<<1<<" "<<++min<<endl;
        cin>>d;
        coin--;
        if(d==1)
        {
            coin-=co;
            cout<<2<<endl;
            cout<<3<<" "<<min;
            return;
        }
    }
    return 0;
}
int bd(int min, int max,int co) 
{ 
    int a=(max+min)/2;
    cout<<"1"<<" "<<a<<endl;
    int t;
    cin>>t;
    if(t==0)
    {
        coin--;
        return bd(a,max,co);
    }
    if(t==1)
    {
        cout<<2<<endl;
        coin-=co;
        return bdbd(min,a,co);
    }
    return 0;
} 
int bdbd(int min,int max,co)
{
    int d;
    while(max>=min)
    {
        cout<<1<<" "<<--max<<endl;
        cin>>d;
        coin--;
        if(d==1)
        {
            coin-=co;
            cout<<2<<endl;
            cout<<3<<" "<<min;
            return;
        }
        else if(d==0)
        {
            cout<<3<<" "<<++max;
        }
    }
    return 0;
}