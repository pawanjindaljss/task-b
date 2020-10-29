#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
	char a[100];
	scanf("%s",a);
	char cap[100],small[100];
	int s=0,c=0,count=0;
	for(int i=0;a[i]!='\0';i++)
	{
		count++;
		int q=(int)a[i];
		if(q<=90 && q>=65)
		{
			cap[c++]=a[i];
		}
		if(q<=122 && q>=97)
			small[s++]=a[i];
	}
	sort(cap,cap+c);
	sort(small,small+s);
	for(int i=0;i<count;i++)
	{
		int cc=0,ss=0;
		if(cap[cc]-65<=small[ss]-97 && (cc<c && ss<s))
			cout<<cap[cc++];
		else
			cout<<small[ss++];
		if(cc<c)
		{
			cout<<cap[cc];
		}
		if(ss<s)
		{
			cout<<small[ss];
		}

	}
	cout<<endl;
	return 0;
}