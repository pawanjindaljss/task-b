#include <iostream>
using namespace std;
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

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[3],s,sum=0;
		cin>>s;
		for(int i=0;i<3;i++)
			cin>>a[i];		
		sum=a[0]+a[1]+a[2];
		if(sum<=s)
			cout<<1<<endl;
		else if((sum-a[2])<=s || (sum-a[0])<=s)
			cout<<2<<endl;
		else
			cout<<3<<endl;
	}
	return 0;
}