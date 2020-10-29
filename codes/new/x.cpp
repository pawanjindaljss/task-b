#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int x=0,c=0,a[len]={0};
	for(int i=0;i<len;i++)
	{
		if(s[i]=='{' ||s[i]=='[' ||s[i]=='(')
		{
			x++;
			c++;
		}
		else if(s[i]=='}' ||s[i]==']' ||s[i]==')')
			x--;
		else if(s[i]=='*')
			a[x]++;
	}
	int f=0;
	for(int i=0;i<=c;i++)
		if(a[i]>=2)
			f++;
	if(x==0)
		cout<<"YES ";
	else
		cout<<"NO ";
	cout<<f;
}