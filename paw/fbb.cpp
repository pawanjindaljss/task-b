#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int low, high, i, flag;
    cin >> low >> high;
    string s;
    string str[100];
    int x=0;
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            s= to_string(low);
            str[x++]=s;
        }
        ++low;
    }
    map<ll,string> mpp;
    string ss;
    ll ln;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            int flag=0;
            string sn;
            if(i!=j)
            {
                ss=str[i]+str[j];
                ln = stoi(ss);
                for(ll k=2;k<=ln/2;k++)
                {
                    if(ln%k==0)
                    {
                       flag=1;
                       break;
                    }
                }
                if(flag==0)
                {
                    sn=to_string(ln);
                    mpp[ln]=sn;
                }
            }
        }
    }
    int len=mpp.size();
    ll min,max;
    map<ll,string> ::iterator it;
    for(it = mpp.begin();it!=mpp.end();it++)
        max=it->first;
    it=mpp.begin();
    min=it->first;
    ll next;
    for(int i=0;i<len-1;i++)
    {
        next=min+max;
        min=max;
        max=next;
    }
    cout<<min<<endl;
    return 0;
}