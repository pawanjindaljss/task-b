#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int b[10]={0};
	    string x;
	    while(n--)
	    {
	        cin>>x;
	        for(int i=0;i<10;i++)
	            if(x[i]=='1')
	                b[i]+=1;
	    }
	    for(int i=0;i<10;i++)
	    	b[i]=b[i]%2;
	    int count=0;
	    for(int i=0;i<10;i++)
	    	if(b[i]==1)
	    		count++;
	    cout<<count<<endl;
	}
	return 0;
}