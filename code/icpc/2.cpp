//https://www.geeksforgeeks.org/build-lowest-number-by-removing-n-digits-from-a-given-number/
/*
 ___     ___     ___                                               _
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
using namespace std;
int main() 
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int r=n;
        vli v,dup,p;
        fo(i,0,n)
        {
            int d;
            cin>>d;
            v.push_back(d);
            dup.push_back(d);    
        }
        int yuuim=0;
        while(r--)
        {
            int h=v.size();
            int maximum=0,indexing;
            fo(i,0,h)
            {
            int l=v[i];
            v.erase(v.begin()+i);
            int su=0;
            fo(j,0,h-1)
            su=su|v[j];
            if(su>maximum)
            {
                maximum=su;
                indexing=i;
            }
            v.insert(v.begin()+i,l);
            }
            yuuim=yuuim+maximum;
            fo(i,0,n)
            if(v[indexing]==dup[i])
            {
            p.push_back(i+1);
            break;
            }
            v.erase(v.begin()+indexing);
        }
        int yuui=0;
        for(int i=0;i<n;i++)
        yuui=yuui|dup[i];
        cout<<yuuim+yuui<<endl;
        for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
        cout<<endl;
    }
    return 0;
}