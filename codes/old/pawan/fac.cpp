#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    	cpp_int r=1;
    	cin>>n;
    	for(j=1;j<=n;j++)
    	   r=r*j;
		cout<<r<<endl;	
	}
	return 0;
}