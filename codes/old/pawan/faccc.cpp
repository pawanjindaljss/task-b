#include <iostream>
using namespace std;
int main()
{
    int t;
    int ar[160]; 
    int n,i,j,carry,a,x;
    cin>>t;
    while(t--)
    {
       cin>>n;
       ar[0]=1;  
       a=1;
       carry=0;
       for(i=1;i<=n;i++)
       {
            for(j=0;j<a;j++)
            {
               x= ar[j]*i+carry;x
               ar[j]=x%10;
               carry= x/10;
            }
            while(carry>0)
            {
               ar[a]=carry%10;
               carry = carry/10;
               a++;
            }
        }
            for(i=(a-1);i>=0;i--)
            {
            	cout<<ar[i];
           	}
        	cout<<endl;
    }
    return 0;
}
