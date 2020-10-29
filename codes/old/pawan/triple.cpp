#include <bits/stdc++.h>
using namespace std;
int find(int arr[], int n,int r)
{
    int count=0;
    for (int k=0; k<n; k++)
    {
       	if (arr[k] == r)
           	count++;
   	}
    	for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
        	if (arr[i]+arr[j] == r)
        		count++;
            
            	for (int k=j+1; k<n; k++)
            	{
                	if (arr[i]+arr[j]+arr[k] == r)
                		count++;
            	}
            
        }
    }
    return count;
}
int main()
{
    int a,result;
    long int s=0;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
        s=s+ar[i];
    }
    if(s%3==0)
    {
        int re=s/3;
        result=find(ar,a,re);
        cout<<result;
    }
    else
        cout<<"0";
    return 0;
}