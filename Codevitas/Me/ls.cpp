#include <iostream>
#define mod 1000000007
using namespace std;
int modInverse(int a, int m) 
{ 
    a = a%m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
} 
  
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,t,m,prob;
        cin>>n>>t>>m;
        prob = ((m%mod)*(modInverse(t,mod)))%mod;
        cout<<prob<<endl;
    }
    return 0;
}