#include <iostream>
using namespace std;
class app
{
	int c,d;
public:
	app(int a,int b)
	{
		c=a;
		d=b;
	}
	int sum()
	{
		int add=c+d;
		return add;
	}
};
int main()
{	
	int x,y,summ;
	cout<<"Enter the num: ";
	cin>>x>>y;
	app ap(x,y);
	summ=ap.sum();
	cout<<summ<<endl;
	return 0;
}