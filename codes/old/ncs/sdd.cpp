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
        char a[ll][20];
        map<string,int> mymap;
        map<string,int>::iterator it;
        for(int i=0;i<ll;i++)
        {
            scanf("%s", a[i]);
        }
        long long int sum=0;
        for(int i=0;i<ll;i++)
        {
            it = mymap.find(a[i]);
            if (it != mymap.end()){
                sum += it->second/2;
            }
            else
            {
                int len=0,tis=2;
                len=strlen(a[i]);
                for(int j=1;j<len;j++)
                {
                    if(((a[i][j]=='d') || (a[i][j]=='f')) && ((a[i][j-1]=='d') || (a[i][j-1]=='f')))
                        tis+=4;
                    else if(((a[i][j]=='d') || (a[i][j]=='f')) && ((a[i][j-1]=='j') || (a[i][j-1]=='k')))
                        tis+=2;
                    else if(((a[i][j]=='j') || (a[i][j]=='k')) && ((a[i][j-1]=='j') || (a[i][j-1]=='k')))
                        tis+=4;
                    else if(((a[i][j]=='j') || (a[i][j]=='k')) && ((a[i][j-1]=='d') || (a[i][j-1]=='f')))
                        tis+=2;
                }
                mymap[a[i]] = tis;
                sum += tis;
            }
        }
        printf("%lld\n",sum);
    }
    return 0; 
}