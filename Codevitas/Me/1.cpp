#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    int b[n]={0};
    int c[26]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int x=(int)a[i];
        x-=97;
        c[x]++;
        b[i]=c[x];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        cout<<b[y-1]-1<<endl;
    }
    return 0;
}