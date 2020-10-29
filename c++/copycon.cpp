#include <bits/stdc++.h>
using namespace std;
class point
{
private:
	int x,y,z;
public:
	point(int a, int b,int c=0)
	{
		x=a;
		y=b;
		cout<<x<<" "<<y<<endl;
	}
	point(const point &p1)
	{
		x=x+10;
		y=y+20;
		z=z;
		cout<<p1.x<<" "<<p1.y<<" "<<p1.z<<endl;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	int getz()
	{
		return z;
	}
};
int main()
{
	point p(10,20,20);
	point p2=p;
}