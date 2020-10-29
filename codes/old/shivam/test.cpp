#include <iostream>;
using namespace std;

namespace A
{
  int x = 1;
}
namespace B
{
  double x = 1.1;
}

int main () {
  {
using namespace A;
	cout << x << endl;
;
  }
  {
using namespace B;
cout << x << endl;
  }
  return 0;
}