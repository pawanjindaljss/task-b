#include <stdio.h>
void main()
{
	int i,j,lmt,tmp,a[100],pos,min;
	printf("enter the limit of array: ");
	scanf("%d",&lmt);
	printf("enter the element of array: ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(lmt-1);i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<lmt;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
	}
	printf("\narray after sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%2d   ",a[i]);
	}
}