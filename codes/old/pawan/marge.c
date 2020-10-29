#include <stdio.h>
void main()
{
	int i,j,k=0,m,n,l,a[20],b[20],c[40];
	printf("enter the limit of first array:");
	scanf("%d",&m);
	printf("enter the element of first array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the limit of second array:");
	scanf("%d",&n);
	printf("enter the element of second array:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<m;)
	{
		for(j=0;j<n;)
		{
			if(a[i]<b[j])
			{
				c[k++]=a[i];
				i++;
			}
			else
			{
			c[k++]=b[j];
			j++;
			}
		}
	}
	l=k;
	printf("merge array is:");
	for(k=0;k<l;k++)
	{
		printf("%d",c[k]);
		printf(" ");
	}
}
