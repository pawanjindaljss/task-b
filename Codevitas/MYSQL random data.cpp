#include <bits/stdc++.h>
using namespace std;
string printRandomString(int n)
{
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
 
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 26];
     
    return res;
}

int main() {
	int min=1, max=2000;
	// random_device rd;
	// mt19937 eng(rd());
	// uniform_int_distribution<int> distr(min, max);
	int upper=1400, lower=1;
	for (int i = 0; i <1000; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        cout<<printRandomString(8)<<"," << num <<endl;
    }
	return 0;
}
