#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int array[test];
    for(int i=0;i<test;i++)
    {
        cin>>array[i];
    }
    sort(array,array+test);
    for(int i=0;i<test;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}