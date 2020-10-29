#include <bits/stdc++.h>
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std;
int main()
{
	int lmt,l2;
    cin>>lmt;
    vector<int> ar[lmt];
    long long int inn;
    for(int i=0;i<lmt;i++)
   		cin>>ar[i];
   	sort(ar,ar+lmt);
    cin>>l2;
    while((l2--)>0)
    {
vector<int>::iterator indx=lower_bound(ar.begin(),ar.end(), inn);

int pos=indx-ar.begin();
if(indx == ar.end() || *indx!=inn)
    cout<<"";
else
    cout<<pos+1; 
    }
    return 0;
}