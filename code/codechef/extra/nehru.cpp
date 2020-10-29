//https://www.codechef.com/FFC22019/problems/FFC219C
#include <bits/stdc++.h> 
using namespace std; 
unordered_map<char, int> h; 
bool compare(string x, string y) 
{ 
    for (int i = 0; i < min(x.size(), y.size()); i++) { 
        if (h[x[i]] == h[y[i]]) 
            continue; 
        return h[x[i]] < h[y[i]]; 
    } 
    return x.size() < y.size(); 
}
int main() 
{ 
    string s,str = "abcdefghijklmnopqrstuvwxyz";
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    h.clear(); 
    for (int i = 0; i < str.size(); i++)  
        h[str[i]] = i;    
    sort(v.begin(), v.end(), compare);
    int a[26];
    for(int i=n-1;i>=0;i--)
    {
        s=v[i];
        int xx=int(s[0])-97;
        a[xx]=i; 
        cout<<xx<<" ";
    }
    int q;
    cin>>q;
    string qq[q];
    for(int i=0;i<q;i++)
    {
        cin>>qq[i];
        s=qq[i];
        int count=0;
        int z=(int)(s[0])-97;
        int zz=a[z];
        //cout<<zz<<endl;
        if(zz>=0 && zz<n)
        {
            for(int j=zz;j<n;j++)
            {
                string vv=v[j];
                int c=0,len=s.length();
                if(s[0]==vv[0])
                {
                    for(int k=0;k<len && k<vv.length();k++)
                    {
                        if(s[k]==vv[k])
                        {
                            c++;
                        }
                        else if(s[k]!=vv[k])
                        {
                            break;
                        }
                    }
                    if(c==len)
                    count++;
                }
                else
                    break;
            }
        }
        //cout<<count<<endl;
    }
    return 0; 
} 