//     ******************* PPPPPPPPPPPPPPP            JJJJJJJJJJJJJJJJJ
//     ******************* PPPPPPPPPPPPPPP                  JJ
//     ******************* PP           PP                  JJ
//     ******************* PP           PP                  JJ
//     ******************* PP           PP                  JJ
//     ******************* PP           PP                  JJ
//     ******************* PPPPPPPPPPPPPPP                  JJ
//     ******************* PPPPPPPPPPPPPPP                  JJ
//     ******************* PP                               JJ
//     ******************* PP                               JJ
//     ******************* PP                        __     JJ
//     ******************* PP                        JJ     JJ  
//     ******************* PP                       JJ      JJ
//     ******************* PP           .....        JJ     JJ
//     ******************* PP           .....         JJ    JJ
//     ******************* PP            .....         JJJJJJJ

//   #
#include<bits/stdc++.h>
#define pb emplace_back
#define ld long double
typedef long long int lli;
#define vli vector<lli>
#define vld vector<ld>
const int mod = 1000000007;
using namespace std;
bool is_w(char chat)
{
  if(chat=='a' || chat=='e' || chat=='i' || chat=='o' || chat=='u')
    return true;
  return false;
}
bool is_A(string str)
{
    int n=str.length();
    int cnttw[n];
    if(is_w(str[0])) 
      cnttw[0]=1;
    else 
      cnttw[0]=0;
    for(int i=1;i<n;i++)
    {
        if(is_w(str[i]))
          cnttw[i]=cnttw[i-1]+1;
        else 
          cnttw[i]=cnttw[i-1];
    }
    for(int i=1;i<n;i++){
        if(i+1-cnttw[i]>cnttw[i]) 
          return false;
    }
    for(int i=1;i<n-1;i++)
      for(int j=i+1;j<n;j++)
        if(j-i+1-(cnttw[j]-cnttw[i-1])>(cnttw[j]-cnttw[i-1])) 
          return false;
    return true;
}
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string vec[n];
    vli alice;
    vli bob;
    for(int i=0;i<n;i++)
    {
      cin>>vec[i];
      if(is_A(vec[i]))
        alice.pb(i);
      else 
        bob.pb(i);
    }
    ld score1=1,score2=1;
    vld x_c(26,0);
    vld fix_to_c(26,0);
    for(int i : alice)
    {
       vector<bool> viscer(26,false);
       int l=vec[i].length();
       for(int j=0;j<l;j++)
       {
          fix_to_c[vec[i][j]-'a']++;
          if(!viscer[vec[i][j]-'a'])
          {
           viscer[vec[i][j]-'a']=true;
           x_c[vec[i][j]-'a']++;
          }
       }
    }    
    int k=alice.size();
    for(int i=0;i<26;i++)
      if(x_c[i]!=0)
          score1*=(x_c[i]/pow(fix_to_c[i],k));
    for(int i=0;i<26;i++)
    {
        x_c[i]=0;
        fix_to_c[i]=0;
    }
    for(int i : bob)
    {
       vector<bool> viscer(26,false);
       int l=vec[i].length();
       for(int j=0;j<l;j++)
       {
          fix_to_c[vec[i][j]-'a']++;
          if(!viscer[vec[i][j]-'a'])
          {
             viscer[vec[i][j]-'a']=true;
             x_c[vec[i][j]-'a']++;
          }
       }
    }
    k=bob.size();
    for(int i=0;i<26;i++)
      if(x_c[i]!=0)
          score2*=(x_c[i]/pow(fix_to_c[i],k));
    if(alice.size()==0) 
      cout<<0<<endl;
    else if(bob.size()==0) 
      cout<<"Infinity"<<endl;
    else
    {
        ld answer=(score1/score2);
        if(answer>10000000) 
          cout<<"Infinity"<<endl;
        else 
          cout<<fixed<<setprecision(7)<<answer<<endl;
    }
  }
  return 0;
}
