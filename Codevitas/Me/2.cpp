#include <iostream>
#include <algorithm>
typedef unsigned long long int ull;
using namespace std;
int main()
{
    int n;
    cin>>n;
    ull a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int pre=0,next=0;
    for(int i=0;i<n-1;i++)
    {
        next++;
        if(a[i]!=a[i+1])
        {
            if(pre<next)
            {
                pre=next;
                
            }
            next=0;
        }
    }
    cout<<pre;
    return 0;
}