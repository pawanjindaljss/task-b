#include <iostream>
using namespace std;
int main()
{
    int l;
    cin>>l;
    long long x=0,y=0,z;
    int a[l][l];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                x+=a[i][j];
            }
            if((i+j)==(l-1))
                y+=a[i][j];
        }
    }
    if(x>y)
        z=x-y;
    else if(y>x)
        z=y-x;
    else 
    	z=0;
    cout<<z;
    return 0;
}
