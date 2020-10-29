#include <stdio.h>
void main()
{
	int a[10],i,tmp,lmt,pos;
	printf("enter limit of array ");
	scanf("%d",&lmt);
	printf("enter element of array ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	lmt++;
	printf("enter the position ");
	scanf("%d",&pos);
	for(i=lmt;i>=pos-1;i--)
	{
		a[i]=a[i-1];
	}
	printf("enter the valude of begnning ");
	scanf("%d",&a[pos-1]);
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}