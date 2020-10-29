#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int l;
	cin>>l;
	int a=0,b=0,x,y,max=0,w;
	for(int i=0;i<l;i++)
	{
		cin>>x>>y;
		a=a+x;
		b=b+y;
		if((a-b)>max)
		{
			max= a-b;
			w=1;
		}
		else if((b-a)>max)
		{
			max=b-a;
			w=2;
		}
	}
	cout<<w<<"  "<<max;
	return 0;
}