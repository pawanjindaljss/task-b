#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	while(l--)
	{
		int a;
		cin>>a;
		int b[a];
		for(int i=0;i<a;i++)
			cin>>b[i];
		sort(b,b+a);
		int c;
		cin>>c;
		cout<<b[c-1]<<endl;
	}
	return 0;
}