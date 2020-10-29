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
//     ******************* PP 								   __			JJ
//     ******************* PP 								   JJ			JJ	
//     ******************* PP 									JJ			JJ
//     ******************* PP 					.....			 JJ			JJ
//     ******************* PP 					.....			  JJ		JJ
//     ******************* PP           		.....			   JJJJJJJJJJJ

//   #
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll nn;
		cin>>nn;
		ll x=nn;
		int a=0,b=0;
		int q[10];
		while(x)
		{
			q[b++]=x%10;
			x/=10;
			a++;
		}
		for(int i=0;i<a;i++)
		{
			b=0;
			for(int j=0;j<a;j++)
			{
				if(i==j)
					continue;
				b+=q[j];
				b*=10;
			}
			b/=10;
			if(b<nn)
				nn=b;
		}
		cout<<nn<<endl;
	}
}
	ostringstream str1; 
    str1 << num; 
    string geek = str1.str();