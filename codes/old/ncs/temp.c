#include <stdio.h>
int main()
{
	int c=5;
	int *p;
	int **pt;
	p=&c;
	pt=&p;
	printf("%p",p);
	printf("%d",*p);
	printf("%d",**pt);
	printf("%p",pt);
	return 0;
}
