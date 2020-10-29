#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
          {
              cin>>a[i];
          }
          int c=0;
          for(int i=0;i<n-1;i++)
          {
             if(a[i]!=a[i+1])
                c++;
          }
        int d=0;
        if(c<=k)
          {
              cout<<"Case #"<<j<<": 0";
          }
        else
          {
              for(int i=0;i<n-1;i++)
             {  
               if(a[i]!=a[i+1])
                  { if(a[i]==a[i+2])
                       d++;
                  }
             }
            cout<<"Case #"<<j<<": "<<(c-k-d); 
            
          }
          cout<<endl;
    }
    return 0;
    
}
