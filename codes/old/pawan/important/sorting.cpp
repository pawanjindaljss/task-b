#include <bits/stdc++.h> 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    	map<int, int> mp;
    	map<int ,int>::iterator it;
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    	    cin>>a[i];
    	    it=mp.find(a[i]);
    	    if(it!=mp.end())
    	        it->second++;
    	    else
    	        mp[a[i]]=1;
        }
        int x=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            while(it->second--)
            {
               a[x++]=it->first;
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
	}
	return 0;
}



#include <bits/stdc++.h> 
using namespace std;
int *mapp(int a[],int n)
{
    map<int, int> mp;
    map<int ,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        it=mp.find(a[i]);
        if(it!=mp.end())
            it->second++;
        else
            mp[a[i]]=1;
    }
    int x=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        while(it->second--)
        {
           a[x++]=it->first;
        }
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int *z=mapp(a,n);
        for(int i=0;i<n;i++)
            a[i]=*(z+i);
        cout<<endl;
    }
    return 0;
}