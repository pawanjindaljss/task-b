//https://www.codechef.com/OCT19B/problems/MSNG
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //vector<ll>v ;
        ll a[n];
        string b[n];
        ll x;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]!=-1)
                x=i;
        }
        string ss=b[x];
        ll len=ss.length();
        //cout<<len;
        ll ab[len];
        ll ww=a[x];
        for(ll i=0;i<len;i++)
        {
            ll ee=(ll)ss[i];
            if(ee>=48 && ee<=57)
                ee-=48;
            else
                ee-=55;
            ab[i]=ee;
        }
        //cout<<ss;
        ll sd=0,zz=0;
        for(ll i=len-1;i>=0;i--)
        {
            ll q=ab[i];
            //cout<<q<<" ";
            sd+=(q*pow(ww,zz));
            zz++;
        }
        //cout<<sd<<endl<<zz<<endl;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            string s=b[i];
            ll le=s.length();
            ll aa[le],start=0 ;
            //cout<<le<<endl;
            //cout<<start<<endl;
            if(i==x)
                continue;
            for(ll k=0;k<le;k++)
            {
                ll asciivalue=(ll)s[k];
                if(asciivalue>=48 && asciivalue<=57)
                    asciivalue-=48;
                else
                    asciivalue-=55;
                if(start<asciivalue)
                    start=asciivalue;
                aa[k]=asciivalue;
                //cout<<aa[]<<" ";
            }
            /*for(ll i=0;i<le;i++)
                cout<<aa[i]<<" ";*/
            //cout<<start<<endl;
            ll sum=0,power=0,f=0;
            for(ll j=start+1;j<=36;j++)
            {
                power=1;
                sum=0;
                //cout<<j<<endl;
                for(ll l=le-1;l>=0;l--)
                {
                    sum+=aa[l]*power;
                    power=power*j;
                    
                    //cout<<sum<<" ";
                }
                //cout<<sum<<endl;
                if(sum==sd)
                {
                    f=1;
                    //cout<<j<<endl;
                    break;
                } 
            }
            if(f==0)
            {
                ans=1;
                break;
            }
        }
        if(ans==1 && 1000000000000ll && sd>=0)
            cout<<-1<<endl;
        else
            cout<<sd<<endl;
    }
}