#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int s=0,ss=0;
    for(int i=0;i<=n/2;i++)
    {
        if(n>0)
        {
            s+=a[i];
            n--;
        }
        else
            break;
        if(n>0)
        {
            ss+=a[n-1-i];
            n--;
        }
    }
    cout<<s<<" "<<ss;
    //cout<<abs(s-ss);
    return 0;
}