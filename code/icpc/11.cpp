//https://www.geeksforgeeks.org/build-lowest-number-by-removing-n-digits-from-a-given-number/
/*
 ___     ___     ___                                              ___
 | |     | |     | |                                              | |
 | |     | |  ___| |____                                          | | ________  
 | |     | | |___   ____|  _________    __________   __________   | ||_____  |
 | |     | |     | |       |  ______|  |  ______  | |  ______  |  | |     / /
 | |     | |     | |       | |         | |      | | | |      | |  | |    / /    
 | |     | |  _  | |       | |         | |      | | | |      | |  | |   / /
 | |_____| |_| | | |______ | |______   | |______| | | |______| |  | |  / /    
 |_____________| |_______| |________|  |__________| |__________|  |_| /_/    
 
 */    
#include<bits/stdc++.h>
   
#define pb emplace_back
#define val first
#define idx second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
typedef long long int lli;
#define vli vector<lli>
#define min2(a, b) ((a) < (b) ? (a) : (b))
#define min(a, b, c) (min2(min2((a), (b)), (c)))
#define fo(i,a,b) for(lli i=(a);i<(b);i++)
const lli mod = 1000000007;
#define timer cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s\n";
using namespace std;

lli buildLowestNumberRec(string str, lli n, string &res)
{
// If there are 0 characters to remove from str,
// append everything to result
if (n == 0)
{
res.append(str);
return 0;
}

lli len = str.length();

// If there are more characters to remove than string
// length, then append nothing to result
if (len <= n)
return 0;

// Find the smallest character among first (n+1) characters
// of str.
lli minIndex = 0;
for (lli i = 1; i<=n ; i++)
if (str[i] < str[minIndex])
minIndex = i;

// Append the smallest character to result
res.push_back(str[minIndex]);

// substring starting from minIndex+1 to str.length() - 1.
string new_str = str.substr(minIndex+1, len-minIndex);

// Recur for the above substring and n equals to n-minIndex
lli x=buildLowestNumberRec(new_str, n-minIndex, res);
}

// A wrapper over buildLowestNumberRec()
string buildLowestNumber(string str, lli n)
{
string res = "";

// Note that result is passed by reference
buildLowestNumberRec(str, n, res);

return res;
}

// Driver program to test above function
lli n;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
		string str ;
		cin>>str;
		n = 1;
		int x=0;
		//cout << buildLowestNumber(str, n)<<endl;
	    string geek=buildLowestNumber(str, n);
	    for(lli i=0;i<geek.length();i++)
	    {
	    	if(geek[i]!='0')
	    		break;
	    	x++;
	    }
	    for(lli i=x;i<geek.length();i++)
	    		cout<<geek[i];
	    cout<<endl;
  }
   
return 0;
} 