#include <stdio.h>
void main()
{
	int i,j,lmt,tmp,a[20];
	printf("enter the limit of array ");
	scanf("%d",&lmt);
	printf("enter the element of array ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before change: ");
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<lmt-1;i=i+2)
	{
		tmp=a[i];
		a[i]=a[i+1];
		a[i+1]=tmp;
	}
	printf("array after change: ");
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}