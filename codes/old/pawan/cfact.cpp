#include <iostream>
using namespace std;
int fact(int a)
{
	int s=1;
	while(a>0)
	{
		s=s*a;
		a--;
	}
	return s;
}
int main()
{
	int i,t,b;
	cin>>t;
	int a[t];
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<t;i++)
	{
		b=fact(a[i]);
		cout<<b<<endl;
	}
}