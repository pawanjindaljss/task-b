#include <stdio.h>
void main()
{
	int i=0,j,k,l,dis,lmt,tmp,a[20];
	printf("enter the limit of array: ");
	scanf("%d",&lmt);
	printf("enter the element of array: ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the distance for sorting: ");
	scanf("%d",&dis);
	l=dis;
	printf("array before sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
	for(j=0;j<=l && j<=(lmt/dis);j++)
		{
			
			for(;i<lmt-dis;i=i+dis)
			{
				for(k=i+dis;k>0;k=k-dis)	
				{
					if(a[k]<a[k-dis])
					{
						tmp=a[k];
						a[k]=a[k+dis];
						a[k+dis]=tmp;
					}
				}	
			}
			i=j+1;
			dis--;
		}
	printf("\narray after sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}