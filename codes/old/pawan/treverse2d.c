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
	printf("before change matrix: \n");
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
		for(j=i+1;j<c;j++)
		{
			if(i != j)
			{
				tmp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=tmp;
			}
		}
	}
	printf("after change matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}