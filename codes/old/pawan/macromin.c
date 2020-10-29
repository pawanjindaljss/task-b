#include <stdio.h>
#define min(a,b) (a<b?a:b)
void main()
{
	int a=5,b=9,c;
	c=min(a,b);
	printf("%d",c);
}