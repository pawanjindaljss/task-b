#include <bits/stdc++.h>
using namespace std;

int main() {
// 	string s,ss;
// 	getline(cin,s);
// 	for(int i=0;i<s.length();i++)
// 	{
// 		if(!((s[i]==' ') || (s[i]==',') || (s[i]=='|') || (s[i]==']') || (s[i]=='[') || (s[i]==''')))
// 		    ss+=s[i];
// 	}
// 	cout<<ss;
    string a,b;
    cin>>a>>b;
    if(a.length() != b.length())
        cout<<"wrong";
    else
    {
        for(int i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            {
                for(int j=i;j<i+6;j++)
                    cout<<a[j];
                //cout<<endl;
                break;
            }
        }
    }
	return 0;
}
