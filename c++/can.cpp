#include<iostream> 
  
using namespace std; 
  
class myInteger 
{ 
   private: 
     int value; 
   public:  
     myInteger(int v=10)  // parametrized constructor 
     {  value = v;  
     	cout<<value;
     } 
     
     //...other things in class   
}; 
  
int main() 
{ 
  myInteger I1(50); 
  return 0; 
} 