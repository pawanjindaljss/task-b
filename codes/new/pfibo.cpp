#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,l;
	cin>>n>>l;
	int a[n-l];
	string aa[n-l];
	int x=0;
	for(int i=n;i<=l;i++)
	{
		int f=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			a[x]=i;
			s[x]=to_string(i);
			x++;
		}
	}
	int xx=x*(x-1);
	int b[xx];
	int c=0;
	for(int i=0;i<xx;i++)
	{
		for(int j=0;j<xx;j++)
		{
			if(i!=j)
				b[c++]=int(s[i]+s[j]);
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=2;j<b[i]/2;j++)
		{
			if(b[i]%j==0)
			{
				f=1;
				break;
			}
		}
	}
}