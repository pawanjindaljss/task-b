#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l;
    cin>>l;
    cout<<endl;
    int a[l];
    long long int sum=0;
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}