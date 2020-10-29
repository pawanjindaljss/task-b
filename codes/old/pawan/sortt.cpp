#include <iostream>
using namespace std;
int main()
{
	int l,a=0,b=0;
	cin>>l;
	int g[l];
	for(int i=0;i<l;i++)
	{
		cin>>g[i];
	}
	for(int i=0;i<l;i++)
	{
		if(g[i]==0)
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	for(int i=0;i<a;i++)
		cout<<"0"<<" ";
	for(int i=0;i<b;i++)
		cout<<"1"<<" ";
	return 0;
}
