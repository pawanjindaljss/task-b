#include<iostream> 
using namespace std; 
class Base 
{ 
public: 
	virtual void show() 
	{ 
		cout<<"In Base \n"; 
	}
	void dis()
	{
		cout<<"base\n";
	} 
}; 
class Derived: public Base 
{ 
public: 
	void show() 
	{ 
		cout<<"In Derived \n"; 
	} 
	void di()
	{
		cout<<"Derived\n";
	}
}; 
int main(void) 
{ 
	Base *bp = new Derived; 
	bp->show();
	bp->dis();
	Derived *x=new Derived;
	x->show();
	return 0; 
} 