#include <stdio.h>
void main()
{
	int a[10][10],i,j,r,c,tmp;
	printf("enter the limit of row & coloum: ");
	scanf("%d %d",&r,&c);
	printf("enter the element of row & coloum: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("before sorting matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c-1;j++)
		{
			if(a[i][j]>a[i][j+1])
			{
				tmp=a[i][j];
				a[i][j]=a[i][j+1];
				a[i][j+1]=tmp;
			}
		}
	}
	printf("after sorting matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}