/*     ******************* PPPPPPPPPPPPPPP            JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP                  JJ
     ******************* PP           PP                  JJ
     ******************* PP           PP                  JJ
     ******************* PP           PP                  JJ
     ******************* PP           PP                  JJ
     ******************* PPPPPPPPPPPPPPP                  JJ
     ******************* PPPPPPPPPPPPPPP                  JJ
     ******************* PP                               JJ
     ******************* PP                               JJ
     ******************* PP                               JJ
     ******************* PP                   JJ          JJ
     ******************* PP                    JJ         JJ
     ******************* PP           .....    JJ         JJ
     ******************* PP           .....     JJ        JJ
     ******************* PP           .....      JJJJJJJJJJJ
*/
#include <bits/stdc++.h> 
using namespace std;
/*     ******************* PPPPPPPPPPPPPPP            JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP                  JJ
     ******************* PP           PP                  JJ
     ******************* PP           PP                  JJ
     ******************* PP           PP                  JJ
     ******************* PP           PP                  JJ
     ******************* PPPPPPPPPPPPPPP                  JJ
     ******************* PPPPPPPPPPPPPPP                  JJ
     ******************* PP                               JJ
     ******************* PP                               JJ
     ******************* PP                               JJ
     ******************* PP                   JJ          JJ
     ******************* PP                    JJ         JJ
     ******************* PP           .....    JJ         JJ
     ******************* PP           .....     JJ        JJ
     ******************* PP           .....      JJJJJJJJJJJ
*/
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,count=0,fl=-1;
    ll max,q,p,id=-1,id2=-1;
		cin>>n>>k;
		ll a[n],b[n]={0};
    string s;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(k%a[i]!=0)
			{
  			count++;
  			id2=i;
  			q=k/a[i];
  			q+=1;
		  }
			if(a[i]>k)
			{
    		fl=1;
    		id=i;
		  }
		}
		if(fl==1)
		{
    	cout<<"YES"<<" ";
    	for(int i=0;i<n;i++)
    	{
    		if(i==n-1)
    		  cout<<"1"<<" ";
    		else
    		  cout<<"0"<<" ";
    	}
    }
		else if(count>0)
		{
  			cout<<"YES"<<" ";
  			for(int i=0;i<n;i++)
  			{
  				if(i==id2)
  				  cout<<q<<" ";
  				else
  				  cout<<"0"<<" ";
  			}
		}
		else
		{
      /*
          kya kr lega krke
          jb aaj tk kuch nh kiya to
      */
			p=k;
			q=p/a[n-1];
			q-=1;
			b[n-1]=q;
			p=a[n-1];
			for(int i=n-2;i>=0;i--)
			{
				if(a[i+1]%a[i]==0)
				{
					count++;
					q=p/a[i];
					q-=1;
					b[i]=q;
					p=a[i];
				/*
          kya kr lega krke
          jb aaj tk kuch nh kiya to
      */
        }
				else
				{
						q=p/a[i];
						q+=1;
						b[i]=q;
						p=a[i];
						break;
				}
				/*
          kya kr lega krke
          jb aaj tk kuch nh kiya to
      */
			}
			if(count==n-1)
  			cout<<"NO"<<" ";
			else
			{
        /*
          kya kr lega krke
          jb aaj tk kuch nh kiya to
      */
				cout<<"YES"<<" ";
				for(int i=0;i<n;i++)
  				cout<<b[i]<<" ";
			}
			
		}
    /*
          kya kr lega krke
          jb aaj tk kuch nh kiya to
      */
		cout<<endl;
	}
	return 0;
}