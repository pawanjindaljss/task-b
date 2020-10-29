#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
int main(){

    string str;
    cin>>str;
	sort(str.begin(), str.end()); 
    reverse(str.begin(), str.end());
    cout << str <<endl;
    return 0;
}