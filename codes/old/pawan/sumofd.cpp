#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	int v,r;
	long int sum=0;
	for(int i=0;i<l;i++)
	{
	    cin>>v;
	   for(int i=0;v!=0;i++)
	   {
	        if(i==0)
	        {
	            r=v%10;
	            sum=sum+r;  
	        }
	        v=v/10;
	        if(0<v && v<10)
	        {
	            r=v%10;
	            sum=sum+r;  
	        }
	            
	   }
	    cout<<sum<<"  "<<endl;
	}
	return 0;
}