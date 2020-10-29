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
	printf("enter the valude for ending ");
	scanf("%d",&a[lmt-1]);
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}