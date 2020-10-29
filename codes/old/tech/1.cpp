
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        int n,count=0;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++)
            cin>>arr1[i];
        sort(arr1,arr1+n);
        for(int i=0;i<n;i++)
            cin>>arr2[i];
        sort(arr2,arr2+n);
        for(int i=0;i<n;i++)
        {
            if(arr2[i]>arr1[i])
                count++;
            else
                break;
        }
        if(count==n)
            cout<<"WIN"<<endl;
        else
            cout<<"LOSE"<<endl;
    }
    return 0;
}
