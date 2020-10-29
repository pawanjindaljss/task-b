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
        int sum=0;
        int a[30];
        for(int i=0;i<30;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                sum=0;
            }
            else
                sum+=a[i];
            if(sum>5)
               break;
        }
        if(sum>5)
        {
            cout<<"#gamerslifematters"<<endl;
        }
        else
            cout<<"#gamingisfun"<<endl;
    }
}