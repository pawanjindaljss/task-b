#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],sum=0,f=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i;
			f++;
			if(sum>=n)
				break;
		}
		if(f<n)
			cout<<f<<endl;
		else
			cout<<n<<endl;
	}	
} 