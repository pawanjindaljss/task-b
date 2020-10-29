#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l;
        scanf("%d",&l);
        int a[l],count=0;
        for(int i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
            if(i>0)
            {
                if(a[i]!=a[i-1]+1)
                {
                    a[i]=a[i-1]+1;
                    count++;
                }
            }
        }
        printf("%d\n",count);
        for(int i=0;i<l;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}    