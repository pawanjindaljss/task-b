#include <bits/stdc++.h>
using namespace std;
string func(string s)
{
    string sub = "        |";
    string sub2= "\n";
    string sub3= "  ";
    int i=10;
    s = regex_replace(s,regex(sub), "");
    s= regex_replace(s,regex(sub2), " ");
    while(i--)
    	s=regex_replace(s,regex(sub3), " ");
    return s ;
}
int main() 
{
    string s,ss ;
    while(cin>>ss)
    {
    	getline(cin,ss);
    	s=s+ss;
    }
    cout<<func(s);
 
    return 0 ;
 
}
