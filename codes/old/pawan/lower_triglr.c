#include <stdio.h>
void main()
{
	int i,j,r,c,a[10][10],fund=0,k;
	printf("enter the limit of row & coloum: ");
	scanf("%d %d",&r,&c);
	printf("enter the element of array: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0 && i<j)
					fund++;
		}
	}
	if(fund>(r+c-2))
		printf("it is trigonal matrix");
	else
		printf("it is not trigonal matrix");
}