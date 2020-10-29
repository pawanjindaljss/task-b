#include<bits/stdc++.h>
#define ll long long int

/*     ******************* PPPPPPPPPPPPPPP                      JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PPPPPPPPPPPPPPP                                    JJ
     ******************* PPPPPPPPPPPPPPP                                    JJ
     ******************* PP                                                 JJ
     ******************* PP                                                 JJ
     ******************* PP                                                 JJ
     ******************* PP                                    JJ           JJ
     ******************* PP                                     JJ          JJ
     ******************* PP                     .....            JJ         JJ
     ******************* PP                     .....             JJ        JJ
     ******************* PP                     .....              JJJJJJJJJJJ
*/
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll aa,ae,a,b,c,d,e,ab;
        aa=pow(10,n);
        cin>>a;
        ae=aa*2+a+2;
        cout<<ae<<endl;
        cin>>b;
        c=aa-b+1;
        cout<<c<<endl;
        cin>>d;
        e=aa-d+1;
        cout<<e<<endl;
        cin>>ab;
        if(ab==-1)
            continue;
    }
}