#include <iostream>
using namespace std;
int main()
{
    int l;
    cin>>l;
    while((l--)>0)
    {
        long int n;
        int c=0,c1=0,temp,t1=0;
        cin>>n;
        if(n<=2048)
        {  
            for(int i=0;i<=11 && n>0;i++)
            {
                t1=2^i;
                if(n==t1)
                {
                    c++; 
                    break;
                }
            }
            if(c<1)
            {
               while(n>0)
                {
                    n=n/2;
                    c++;
                }
            }   
        }
        else
        {
            c=n/2048;
            temp=n%2048;
            if(temp>0)
            {
                for(int i=0;i<=11 && temp>0;i++)
                {
                    if(temp==2^i)
                    {
                        c1++; 
                        break;
                    }
                }    
            }
            if(c1<1)
            {
               for(int i=0;i<=11 && temp>0;i++)
                {
                    temp=temp/2;
                    c1++;
                }
            }
            c=c+c1;
        }
        cout<<c<<endl;
    }
	return 0;
}