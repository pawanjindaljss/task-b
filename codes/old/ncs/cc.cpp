#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    while(l--)
    {
        int max,temp;
        cin>>max;
        int a[max],sum=0;
        for(int i=0;i<max-1;i++)
            cin>>a[i];
        for(int i=max-1;i>0;i--)
        {
            temp=a[i]-a[i-1];
            cout<<temp<<"  ";
            sum=sum+temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}