//     ******************* PPPPPPPPPPPPPPP 
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PP   
//     ******************* PP   
//     ******************* PP   
//     ******************* PP     
//     ******************* PP   
//     ******************* PP.....
//     ******************* PP.....
//     ******************* PP    .....     

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
       string a,b;
       cin>>a;
       cin>>b;
       int la = a.length();
       int lb = b.length();
       if(b=="0")
          cout<<0<<endl;
       else if(a=="0")
          cout<<1<<endl;
       else if(a==b)
          cout<<2<<endl;
       else
       {
     if(la!=lb)
     {
         for(int  i = 0;i<abs(la - lb);i++)
         {
             if(la<lb)
              a = '0' + a;
                     else
              b = '0' + b;
                 }
     }

      //     ******************* PPPPPPPPPPPPPPP 
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PP   
//     ******************* PP   
//     ******************* PP   
//     ******************* PP     
//     ******************* PP   
//     ******************* PP.....
//     ******************* PP.....
//     ******************* PP    .....   

//   #

     int cnt=0,mxcnt = 1;
     for(int i = a.length()-1;i>=0;i--)
     {
        if(a[i]=='1'&&b[i]=='1')
        {
            cnt = 2;
            while(a[i]=='1'&&b[i]=='1')
              i--;
            while(a[i]!=b[i])
              {
       cnt++;
       i--;
       
              }
            if(mxcnt<cnt)
              mxcnt = cnt;
            i++;
        }
     }
     cout<<mxcnt<<endl;
           }
    }
    return 0;
}
//     ******************* PPPPPPPPPPPPPPP 
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPP       
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PPPPPPPPPPPPPPP       
//     ******************* PP   
//     ******************* PP   
//     ******************* PP   
//     ******************* PP     
//     ******************* PP   
//     ******************* PP.....
//     ******************* PP.....
//     ******************* PP    .....   

//   #