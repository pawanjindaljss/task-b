#include <stdio.h>
void main()
{
	int a[10],i,tmp,lmt;
	printf("enter limit of array ");
	scanf("%d",&lmt);
	printf("enter element of array ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	lmt++;
	for(i=lmt;i>0;i--)
	{
		a[i]=a[i-1];
	}
	printf("enter the valude of begnning ");
	scanf("%d",&a[0]);
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}