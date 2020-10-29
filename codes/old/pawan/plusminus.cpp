#include <iostream>
#include <iomanip> 
using namespace std;
int main ()
{
  double f =3.14159;
  std::cout << std::fixed;
  cout <<setprecision(9) << f << '\n';
  return 0;
}
