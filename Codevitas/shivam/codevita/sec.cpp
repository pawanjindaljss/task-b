#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int l,i=0,count=0;
    string s;
    cin >> l >> s;
    while (i < l){
        if(s[i] == 'R'){
            if (i != l-1){
                count++;i++;
            }
            else {
                break;
            }
        }
        else {
            while(i < l && s[i] == 'G') i++;
            if (i == l)break;
            else count++;
        }
    }
    cout << count;
}