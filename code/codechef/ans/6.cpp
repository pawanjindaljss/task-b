 include <bits/stdc++.h>
using namespace std;
#define ll long long

ll value(char c) 
{ 
    if(c>='0' && c<='9') 
        return (ll)c-'0'; 
    else
        return (ll)c-'A'+10; 
} 

ll baseToDec(char *str, ll base) 
{ 
    ll len=strlen(str); 
    ll power=1; 
    ll num=0;
    ll i; 

    for(i=len-1;i>=0;i--) 
    { 
        if(value(str[i])>=base) 
        { 
            return -1; 
        } 
        if(num>1000000000000ll)
        {
            return -1;
        }
        if(power>1000000000000ll)
        {
            return -1;
        }
        num+=value(str[i])*power; 
        power=power*base; 
    } 

return num; 
} 

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b[n];
        char str[n][70];
        for(ll i=0;i<n;i++)
        {
            cin>>b[i]>>str[i];
        }
        ll x,check=0,flag=0,flag1=0;
        for(ll i=0;i<n;i++)
        {
            if(b[i] != (-1))
            {
                x=baseToDec(str[i],b[i]);
                check=1;
                break;
            }
        }
        if(check==1)
        {
            ll temp,temp1;
            for(ll i=0;i<n;i++)
            {
                if(b[i] != (-1))
                {
                    temp=baseToDec(str[i],b[i]);
                    if(temp==x)
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    for(ll j=2;j<=36;j++)
                    {
                        temp1=baseToDec(str[i],j);
                        if(temp1==x)
                        {
                            flag=1;
                            break;
                        }
                        else
                            flag=0;
                    }
                    if(flag==0)
                        break;
                }
            }
        }
        else
        {
            ll minx=LLONG_MAX,temp,temp1;
            for(ll j=2;j<=36;j++)
            {
                temp=baseToDec(str[0],j);
                
                for(ll i=1;i<n;i++)
                {
                    for(ll j=2;j<=36;j++)
                    {
                        temp1=baseToDec(str[i],j);
                        if(temp1==temp)
                        {
                            flag=1;
                            break;
                        }
                        else
                            flag=0;
                    }
                    if(flag==0)
                        break;
                }
                if(minx>temp && flag==1 && temp>=0)
                {
                    minx=temp;
                    flag1=1;
                }
            }  
            x=minx;
        }
        if((flag==1 || flag1==1) && x<=1000000000000ll && x>=0)
            cout<<x<<endl;
        else
            cout<<"-1"<<endl;
    }
}
