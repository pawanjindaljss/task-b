library
#include <bits/stdc++.h> 
ios_base::sync_with_stdio(false);
cin.tie(NULL);

sort in desending
sort(arr, arr+n, greater<int>()); 

compare two array of same leangh
if(equal(a, a+n, b))

sort array in minimum time
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
        	a[x++]=it->first;
    }
    return a;
}
//in main
int *z=mapp(a,n);
    for(int i=0;i<n;i++)
        cout<<*(z+i)<<" ";