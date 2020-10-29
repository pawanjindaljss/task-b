#include <stdio.h>
void main()
{
	int i,j,lmt,tmp,a[20];
	printf("enter the limit of array: ");
	scanf("%d",&lmt);
	printf("enter the element of array: ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<lmt;i++)
	{
		for(j=0;j<lmt-1;j++)
		{
			if(a[j+1]<a[j])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	printf("\narray after sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}