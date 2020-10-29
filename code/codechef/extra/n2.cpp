#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int x[129],y[129],z[129];
	x[1]=0;
	x[2]=0;
	y[0]=2;
	z[0]=2;
	for(int i=2;i<128;i++)
	{
		int temp=x[i],f=0;
		for(int j=i-1;j>0;j--)
		{
			if(x[j]==x[i])
			{
				f=j;
				break;
			}
		}
		if(f==0)
			x[i+1]=0;
		else
			x[i+1]=i-f;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int z=x[n];
		int count=0;
		for(int i=1;i<=n;i++)
			if(z==x[i])
				count++;
		cout<<count<<endl;
	}
}