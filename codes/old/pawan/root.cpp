#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int l;
    cin>>l;
    while((l--)>0)
    {
      int a;
      cin>>a;
      int result = pow(a, 0.5);
      cout<<result<<endl;
    }
	return 0;
}