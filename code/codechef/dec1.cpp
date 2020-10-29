//     ******************* PPPPPPPPPPPPPPP  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PP                                               
//     ******************* PP                                               
//     ******************* PP                                               
//     ******************* PP                                    
//     ******************* PP                                             
//     ******************* PP                                             
//     ******************* PP                                             
//     ******************* PP            
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
        ll x,y,a[8]={0};
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            if(a[x-1]<y)
                a[x-1]=y;
        }
        ll sum=0;
        for(int i=0;i<8;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
}