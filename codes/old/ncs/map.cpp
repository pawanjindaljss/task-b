#include <iostream>
#include <map>

int main ()
{
  std::map<string,int> mymap;
  std::map<string,int>::iterator it;
  for(int i=0;i<l;i++)
  {
    mymap[a[i]]=t[i];
    mymap['b']=100;
    mymap['c']=150;
    mymap['d']=200;
  }
  it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout << "a => " << mymap.find('a')->second << '\n';
  std::cout << "c => " << mymap.find('c')->second << '\n';
  std::cout << "d => " << mymap.find('d')->second << '\n';

  return 0;
}
