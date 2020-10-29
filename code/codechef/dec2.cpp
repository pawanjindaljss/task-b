//     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
//     ******************* PPPPPPPPPPPPPPP									JJ
//     ******************* PP           PP 									JJ
//     ******************* PP           PP 									JJ
//     ******************* PP           PP 									JJ
//     ******************* PP           PP 									JJ
//     ******************* PPPPPPPPPPPPPPP 									JJ
//     ******************* PPPPPPPPPPPPPPP 									JJ
//     ******************* PP 												JJ
//     ******************* PP 												JJ
//     ******************* PP 												JJ
//     ******************* PP 								   JJ			JJ	
//     ******************* PP 									JJ			JJ
//     ******************* PP 					.....			 JJ			JJ
//     ******************* PP 					.....			  JJ		JJ
//     ******************* PP           		.....			   JJJJJJJJJJJ

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		ll x= 0 ,y=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
				x++;
			else if(a[i]==2)
				y++;
		}
		x = (x*(x-1))/2;
		y = (y*(y-1))/2;
		cout<<x+y<<endl;
	}
	return 0;
}