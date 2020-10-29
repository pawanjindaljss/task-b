#include <stdio.h>
void main()
{
	int fact,a,i,j=1;
	printf("enter the value ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		j=j*i;
	}
	printf("%d",j);
}
	