#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int l;
    cin>>l;
    while(l--)
    {
        int ll;
        cin>>ll;
        int a[ll],c=0;
        for(int i=0;i<ll;i++)
        {
            cin>>a[i];
            for(int j=0;j<=a[i];j++)
            if(j%2==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}