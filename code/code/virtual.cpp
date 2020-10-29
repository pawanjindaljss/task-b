#include <bits/stdc++.h>
using namespace std;
class A
{ 
    public:
    void show()
    {
    	cout<<"A"<<endl;
    } 
};
class B : public A 
{
};
int main()
{
    B obj;
    obj.show();
}
