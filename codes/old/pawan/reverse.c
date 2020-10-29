#include <stdio.h>
void main()
{
	int i,j,k,a[20],tmp;
	printf("enter the limit of array ");
	scanf("%d",&j);
	k=j;
	printf("enter the element of array: ");
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<j;)
	{
		tmp=a[i];
		a[i]=a[j-1];
		a[j-1]=tmp;
		i++;
		j--;
	}
	printf("new array is:");
	for(i=0;i<k;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}