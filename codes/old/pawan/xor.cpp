#include <bits/stdc++.h>
using namespace std;
int Xor(int x, int y)
{
return (x | y) & (~x | ~y);
}
int main()
{
	int a,b,re,count=0;
	cin>>a>>b;
	int ar[a];
	for(int i=0;i<a;i++)
		cin>>ar[i];
	for(int i=0;i<a-1;i++)
	{
		re=Xor(ar[i],ar[i]);
		if(re<b)
			count++;
		for(int j=i+1;j<a;j++)
		{
			re=Xor(re,ar[j]);
			if(re<b)
				count++;
		}
	}
	cout<<count;
	return 0;
}