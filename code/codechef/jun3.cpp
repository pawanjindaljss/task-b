#include <iostream>
using namespace std;
/*
     ******************* PPPPPPPPPPPPPPP                      JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PPPPPPPPPPPPPPP                                  JJ
     ******************* PPPPPPPPPPPPPPP                                  JJ
     ******************* PP                                               JJ
     ******************* PP                                               JJ
     ******************* PP                                               JJ
     ******************* PP                                  JJ           JJ
     ******************* PP                                   JJ          JJ
     ******************* PP                   .....            JJ         JJ
     ******************* PP                   .....             JJ        JJ
     ******************* PP                   .....              JJJJJJJJJJJ
*/

#define pb push_back
#define mp make_pair
#define popb pop_back()
#define forl(i,a,n) for(int i=a;i<n;i++)
#define rfor(i,n,a) for(int i=n;i>=a;i--)
#define fore(i,a,n) for(int i=a;i<=n;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,ans=0;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++)
		    for(int j=0;j<m;j++)
		        cin>>a[i][j];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            int x=1;
	            while(((i-x>=0)&&(j-x>=0)&&(i+x<n)&&(j+x<m))&&a[i+x][j]==a[i-x][j]&&a[i][j+x]==a[i][j-x])
	            	x++;
	            ans+=x;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
/*
     ******************* PPPPPPPPPPPPPPP                      JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PP           PP                                  JJ
     ******************* PPPPPPPPPPPPPPP                                  JJ
     ******************* PPPPPPPPPPPPPPP                                  JJ
     ******************* PP                                               JJ
     ******************* PP                                               JJ
     ******************* PP                                               JJ
     ******************* PP                                  JJ           JJ
     ******************* PP                                   JJ          JJ
     ******************* PP                   .....            JJ         JJ
     ******************* PP                   .....             JJ        JJ
     ******************* PP                   .....              JJJJJJJJJJJ
*/