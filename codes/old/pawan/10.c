#include <stdio.h>
int main()
{
	int a[5][5],x,y,i;
	printf("Enter limit of Array: ");
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("&d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if((a[i][j]<a[i++][j]) && (a[i][j]>a[i][j--]))
			{
				count++;
			}
		}
	}
}