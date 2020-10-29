#include <bits/stdcpp.h>
using namespace std;
int main()
{
	int b[26],l;
	cin>>l;
	char a[l];
	for(int i=0;i<26;i++)
		b[i]=0;
	for(int i=0;i<l;i++)
	{
		cin>>a[i];
		temp=a[i];
		x=z-temp;
		b[x]=b[x]+1;
	}
}