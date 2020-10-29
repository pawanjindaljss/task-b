#include <bits/stdc++.h>
using namespace std;
int Semiprime(int num) 
{ 
	int cnt = 0; 

	for (int i = 2; cnt < 2 && i * i <  num; ++i) 
		while (num % i == 0) 
			num /= i, ++cnt;
	if (num > 1) 
		++cnt; 
	return cnt == 2; 
}
int main() 
{ 
	int l;
	cin>>l;
	while(l--)
	{
	    int n,f=0;
    	cin>>n;
    	int a[n/3],aa=0;
    	for(int i=1;i<n;i++)
    	{
    	    if(Semiprime(i))
    	       {
    	           a[aa++];
    	           cout<<i<<"  ";
    	       }
    	}
    	for(int i=0;i<aa;i++)
    	{
    	    for(int j=i;j<aa;j++)
    	    {
    	        int q=a[i]+a[j];
    	        if(q==n)
    	        {
    	            f++;
    	            break;
    	        }
    	    }
    	}
    	if(f==1)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
	}
	return 0; 
} 
