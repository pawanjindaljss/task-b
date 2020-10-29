#include<bits/stdc++.h>
#define lop(i,n) for(int i=0;i<n;i++)
#define itr(container, it)
#define ll long long int
#define all(v) v.begin(),v.end()
using namespace std;
//     ******************* PPPPPPPPPPPPPPP                      JJJJJJJJJJJJJJJJJJJJJJJ
//     ******************* PPPPPPPPPPPPPPP                                  JJ
//     ******************* PP           PP                                  JJ
//     ******************* PP           PP                                  JJ
//     ******************* PP           PP                                  JJ
//     ******************* PP           PP                                  JJ
//     ******************* PPPPPPPPPPPPPPP                                  JJ
//     ******************* PPPPPPPPPPPPPPP                                  JJ
//     ******************* PP                                               JJ
//     ******************* PP                                               JJ
//     ******************* PP                                               JJ
//     ******************* PP                                  JJ           JJ
//     ******************* PP                                   JJ          JJ
//     ******************* PP                   .....            JJ         JJ
//     ******************* PP                   .....             JJ        JJ
//     ******************* PP                   .....              JJJJJJJJJJJ

int main()
{
    int n,q;
    cin>>n>>q;
    ll a[n+1];
    for(int i=1;i<n+1;i++) 
        cin>>a[i];
    int b[n+1];
    b[1]=1;
    int j=2,p=1;
    int xx[q][2];
    if (a[1]<a[2])
    {
        while(j<n+1)
        {
            while(a[j]>a[j-1] && j<n+1)
            {
                b[j]=p;
                j++; 
            }
            p++;
            while(a[j]<a[j-1] && j<n+1)
            {
                b[j]=p;
                j++;
            }
            p++;
        }
    }
    else
    {
        while(j<n+1)
        {
            while(a[j]<a[j-1] && j<n+1)
            {
                b[j]=p;
                j++;    
            }
            p++;
            while(a[j]>a[j-1])
            {
                b[j]=p;
                j++;
            }
            p++;
        }
    }
    lop(i,q)
        cin>>xx[i][0]>>xx[i][1];
    lop(k,q)
    {
        int l=xx[k][0],r=xx[k][1];
        if (b[l]==b[l+1])
        {
            if((b[r]-b[l])%2==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if ((b[r]-b[l])%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
