#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char a[50],b[50];
	scanf("%s",a);
	scanf("%s",b);
	int i,j,count=0;
	for(i=0;a[i]!='\0';++i);
	for(j=0;b[j]!='\0';++j);
	sort(a,a+i);
	sort(b,b+j);
	for (int x = 0; x < i;  x++)
    {
      	for(int y=0;y<j;y++)
     	{
      		if (a[x] == b[y])
        	{
        		a[x]='\0';
        		b[y]='\0';       		
        	}	
      	}
      	if(a[x]!='\0')
      		count++;
    }
    cout<<count;
	return 0;
}