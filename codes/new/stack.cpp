#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	int min=1000000000;
	int x;
	while(cin>>x)
	{
		s.push(x);
		if(s.top<min)
			min=s.top;
	}
	cout<<min<<endl;
}