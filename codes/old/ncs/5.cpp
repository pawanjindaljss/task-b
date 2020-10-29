#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
	int l;
	cin>>l
	while(l--)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<=i;j++)
					cout<<"*";
			}
			cout<<endl;
		}
		else
		{
			for(int i=0i<3;i++)
			{
				for(int j=0;j<=i;j++)
					cout<<"*";
			}
			cout<<endl;
			for(int z=1;z<=a;z++)
			{
				for(int k=0;k<2;k++)
					cout<<" ";
				for(int i=1;i<3;i++)
				{
					for(int j=0;j<=i;j++)
						cout<<"*";
				}
				cout<<endl;
			}
		}
	}
}