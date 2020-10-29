#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() 
{ 
    int l;
    scanf("%d",&l);
    while(l--)
    {
        int ll;
        scanf("%d",&ll);
        int a[ll],b[ll];
        for(int i=0;i<ll;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<ll;i++)
            scanf("%d",&b[i]);
        int f=0;
        for(int i=0;i<ll;i++)
        {
            if((b[i]-a[i])!=0)
            {
                f++;
                break;
            }
        }
        if(f==0)
            printf("TAK\n");
        else
        {
            int lll=ll-1,li=ll-1;
            while((li--)>2)
            {
                if((b[lll]-a[lll])==0)
                    lll--;
                else
                    break;
            }
                if(lll==ll-1)
                    lll=ll-3;
                for(int i=0;i<=lll;i++)
                {
                    int q=(b[i]-a[i]);
                    if(q==0)
                        continue;
                    else
                    {
                        while((q--)>0)
                        {
                            a[i]+=1;
                            a[i+1]+=2;
                            a[i+2]+=3;
                        }
                    }    
                }
                    int found=0;
                    for(int i=0;i<ll;i++)
                    {
                        if((b[i]-a[i])!=0)
                        {
                            found++;
                            break;
                        }
                    }       
            if(found==0)
                printf("TAK\n");
            else
                printf("NIE\n");
        }    
    }
    return 0; 
} 