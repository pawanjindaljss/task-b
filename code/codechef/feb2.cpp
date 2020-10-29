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
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define begin_end(a) a.begin(),a.end()
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//int Binser(int Start,int S){
////    if(S<0) return -1;
//  int Le=Start+1,Ri=N,Mid,Save=0;
//  while(Le<=Ri){
//      Mid=(Le+Ri)/2;
//      if(S>=Pref[Mid]-Pref[Start]){
//          Save=Mid;
//          Le=Mid+1;
//      } else Ri=Mid-1;
//  }
//  return Save;
//}
#define ll long long
int arr[19600];
set<int>ch;
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
bool l_year(int year)
{
    //leap year
    if (year%400==0)  
        return true;  
    if (year%100==0)  
        return false;   
    if (year%4==0)  
        return true;  
    return false;  
}  
//./,...........,,.,.,
int getd(int year)
{
    int y=year-1;
    return ((y+1+(y/4)-(y/100)+(y/400)+28)%7);
}
void create()
{
    //rhne de kuch nh hone wala
    int answer=0;
    for(int i=0;i<19600;i++)
    {
        if(getd(i+1)==3)
        {
            answer++;
            ch.insert(i);
        }
        else if(getd(i+1)==4 && !l_year(i+1))
        {
            answer++;
            ch.insert(i);
        }
        arr[i]=answer;
    }
}
int main()
{
    //rhne de krne se 
    create();
    int t;
    cin>>t;
    while(t--)
    {
        ll m1,m2,year1,year2;
        ll temp,count=0;
        cin>>m1>>year1;
        cin>>m2>>year2;
        //input done
        if(m1>2)
            year1++;
        if(m2<2)
            year2--;
        year1--;
        //years --
        year2--;
        ll day1=year1/19600;
        ll day2=year2/19600;
        //mod values
        ll module1=year1%19600;
        ll module2=year2%19600;
        count+=(day2-day1)*arr[19599];
        //counting
        if(module1>module2)
            count-=arr[module1-1]-arr[module2];
        else
            count+=arr[module2]-arr[module1]+ch.count(module1);
        //final count 
        cout<<count<<endl;
    }
  return 0;
}

/*   ******************* PPPPPPPPPPPPPPP            JJJJJJJJJJJJJJJJJJJJJJJ
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