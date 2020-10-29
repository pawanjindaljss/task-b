#include <stdio.h>
void main()
{
	int i,d,a[10];
	printf("enter decimal num:");
	scanf("%d",&d);
	for(i=0;d>0;i++)
	{
		a[i]=d%2;
		d=d/2;
	}
	printf("binary value is:");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}