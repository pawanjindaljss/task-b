#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	int a[l],b[100];
	for(int i=0;i<l;i++)
		cin>>a[i];
	while(l--)
	{
		int q=0,w=0;
		for(int i=1;i<l;i++)
		{
			if(a[q]%i==0)
				b[w++]=i;
		}
	}
	int count=0,mul=1;
	for(int i=0;b[i]!='\0';i++)
		count++;
	sort(b,b+count);
	for(int i=0;i<count;i++)
	{
		if(b[i]==0)
			mul=mul*b[i];
		if(b[i]==b[i++])
			continue;
		else
		{
			mul*=b[i];
		}
	}
	cout<<mul;
	return 0;
}