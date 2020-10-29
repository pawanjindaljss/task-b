#include <bits/stdc++.h>
using namespace std;

int get_min(int n) {
	if (n == 1) {
		return 0;
	}
	if (n%2 == 0) {
		return 1 + get_min(n/2);
	} 
	else {
		int minus = 1 + get_min(n-1);
		int plus = 1 + get_min(n+1);
		return minus < plus ? minus : plus;
	}
}


int main()
{
	int a;
	cin>>a;
	cout<<get_min(a);
	return 0;
}