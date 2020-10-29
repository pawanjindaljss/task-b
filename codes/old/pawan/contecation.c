#include <stdio.h>
void main()
{
	int a[5],b[5],c[10],i,k=0;
	printf("enter the first array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[k++]=a[i];
	}
	for(i=0;i<5;i++)
	{
		c[k++]=b[i];
	}
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
		printf(" ");
	}
}