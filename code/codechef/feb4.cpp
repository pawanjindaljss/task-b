/*     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 								   JJ			JJ
     ******************* PP 									JJ			JJ
     ******************* PP 					.....			 JJ			JJ
     ******************* PP 					.....			  JJ		    JJ
     ******************* PP                		.....			   JJJJJJJJJJJ
*/
#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define begin_end(a) a.begin(),a.end()
#pragma GCC optimize("Ofast")
using namespace std;
//int Binser(int Start,int S){
////	if(S<0) return -1;
//	int Le=Start+1,Ri=N,Mid,Save=0;
//	while(Le<=Ri){
//		Mid=(Le+Ri)/2;
//		if(S>=Pref[Mid]-Pref[Start]){
//			Save=Mid;
//			Le=Mid+1;
//		} else Ri=Mid-1;
//	}
//	return Save;
//}
/*     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 								   JJ			JJ
     ******************* PP 									JJ			JJ
     ******************* PP 					.....			 JJ			JJ
     ******************* PP 					.....			  JJ		    JJ
     ******************* PP                		.....			   JJJJJJJJJJJ
*/
#define mod 1000000007
#define int long long
#define ll long long
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
}
int power(int a, int y, int m) 
{ 
    if (y == 0) 
        return 1; 
    int p = power(a, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (a * p) % m; 
}
ll pm(ll a,ll b) 
{
    ll res=1;
    a%=mod;
    assert(b>=0);
    for(;b;b>>=1)
    {
        if(b&1)res=res*a%mod;
        a=a*a%mod;
    }
    return res;
}
int mi(int a, int m) 
{ 
    int g = gcd(a, m); 
    if (g != 1) 
        return -1;
    else
    { 
       
      return power(a, m-2, m); 
    } 
} 
signed main() 
{
  	int t;
	cin>>t;
	while(t--)
	{
		int a[10000000]={0};
		int org=5000000;
		int fa=0;
    	int n;
    	cin>>n;
    	string st;
    	cin>>st;
    	for(int i=0;i<st.size();i++)
    	{
    		if(st[i]==')')
    		{
        		fa+=(st.length()-i)*(a[org]);
        		fa+=(st.length()-i);
        		fa%=mod; 	
    		  	org++;
		  		a[org+1]+=a[org-1]+1;
		  		a[org-1]=0;
    		}
    		if(st[i]=='*')
    		  	a[org]++;
    		if(st[i]=='(')
    		    a[org--]++;
    	}
    	int dd,nu,der;
    	nu=fa;
    	dd=st.size()*(st.size()+1)/2;
    	dd%=mod;
		nu%=mod;
		der=gcd(nu,dd);
    	dd/=der;
    	nu/=der;
    	ll xyz=(nu*mi(dd,mod))%mod;
    	cout<<xyz<<endl;	
	}
}
/*     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 								   JJ			JJ
     ******************* PP 									JJ			JJ
     ******************* PP 					.....			 JJ			JJ
     ******************* PP 					.....			  JJ		    JJ
     ******************* PP                		.....			   JJJJJJJJJJJ
*/