#include <stdio.h>
void main()
{
	int fact,a;
	printf("enter the value ");
	scanf("%d",&a);
	fact=factorial(a);
	printf("%d",fact);
}
int factorial(int x)
{
	int r=1;
	if(x==1)
		return 1;
	else
	{
		r=r*factorial(x-1);
	}		
	return r;
}