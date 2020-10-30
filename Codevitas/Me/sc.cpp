#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    int b[n]={0};
    int c[26]={0};
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        temp=(int)a[i];
        temp-=97;
        c[temp]++;
        b[i]=c[temp];
    }
    int q;
    cin>>q;
    int p;
    for(int i=0;i<q;i++)
    {
        cin>>p;
        cout<<b[p-1]-1<<endl;
    }
    return 0;
}