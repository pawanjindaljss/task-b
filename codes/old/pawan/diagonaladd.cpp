#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int x=0,y=0,z;
    int a[l][l];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                x=x+a[i][j];
            }
            if((i+j)==l)
                y=y+a[i][j];
        }
    }
    if(x>y)
        z=x-y;
    else
        z=y-x;
    cout<<z;
    return 0;
}
