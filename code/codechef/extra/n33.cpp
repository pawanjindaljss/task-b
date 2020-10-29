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

//   #
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
#define mod 10000000000000;
typedef long long int ll;
ld distance(ll a, ll b, ll c, ll d) 
{ 
    return sqrt(pow(c - a, 2) + pow(d - b, 2) * 1.0); 
} 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x, y,n, m, k;
        cin >> x >> y;
        cin >> n >> m >> k;
        ld minimum;
        vector<ld>p1;
        vector<ld> pp;
        vector<ld> answer1;
        vector<ld> answer2;
        ll xx[2*n];
        ll yy[2*m];
        ll zz[2*k];
        for(int i = 0; i < 2 * n; i++)
            cin >> xx[i];
        for(int i = 0; i < 2  *m; i++)
            cin >> yy[i];
        for(int i = 0; i < 2 * k;i++)
            cin >> zz[i];
        for(int i = 0; i < 2 * m; i += 2)
        {
            minimum = mod;
            for(int j = 0; j < 2 * k; j += 2)
            {
                ld d = (ld) distance(yy[i], yy[i+1], zz[j], zz[j+1]);
                if(d < minimum)
                    minimum = d;
            }
            pp.push_back(minimum);
        }
        for(int i = 0; i < 2 * n; i += 2)
        {
            minimum = mod;
            for(int j = 0; j < 2 * k; j +=2)
            {
                ld d=(ld) distance(xx[i], xx[i + 1], zz[j], zz[j + 1]);
                if(d < minimum)
                    minimum = d;
            }
            p1.push_back(minimum);
        }
        ll p;
        for(int i = 0; i < 2 * n; i += 2)
        {
            ld d = (ld) distance(x, y, xx[i], xx[i + 1]);
            minimum = mod;
            p = 0;
            for(int j = 0; j < 2 * m; j += 2)
            {
                ld dd = (ld) distance(xx[i], xx[i + 1], yy[j], yy[j + 1]);
                ld r = pp[p] + dd + d;
                if(r < minimum)
                    minimum = r;
                p++;
            }
            answer1.push_back(minimum);
        }
        for(int i = 0; i < 2 * m; i += 2)
        {
            ld d = (ld) distance(x, y, yy[i], yy[i + 1]);
            minimum = mod;
            p = 0;
            for(int j = 0; j < 2 * n; j += 2)
            {
                ld dd = (ld) distance(yy[i], yy[i + 1], xx[j], xx[j + 1]);
                ld r = p1[p] + dd + d;
                if(r < minimum)
                    minimum = r;
                p++;
            }
            answer2.push_back(minimum);
        }
        sort(answer2.begin(),answer2.end());
        sort(answer1.begin(),answer1.end());
        ld result = min(answer1[0], answer2[0]);
        cout<<fixed;
        cout<<setprecision(10)<<result<<endl;
    }
}