#include <stdio.h>
void main()
{
	int i,j,lmt,temp,a[20];
	printf("enter the limit of array: ");
	scanf("%d",&lmt);
	printf("enter the element of array: ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<lmt;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\narray after sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%2d   ",a[i]);
	}
}