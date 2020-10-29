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
        int ff=0;
        scanf("%d",&ll);
        int a[ll],f=0;
        for(int i=0;i<ll;i++)
        {
            scanf("%d",&a[i]);
            if(i>0)
            {
                if(a[i]<a[i-1])
                    f=1;
            }
        }
        if(f==0)
            ff=1;
        else
        {
            for(int i=0;i<ll-1;i++)
            {
                int temp=a[0];
                for(int j=0;j<ll-1;j++)
                    a[j]=a[j+1];
                a[ll-1]=temp;
                int flag=0;
                for(int k=1,q=ll-1;k<=ll/2;k++,q--)
                {
                    if(( a[k]<a[k-1]) || a[q]<a[q-1])
                        flag=1;
                }
                if(flag==0)
                {
                    ff=1;
                    break;
                }
            }
        }
        if(ff==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}    