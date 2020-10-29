#include <stdio.h>
int main()
{
	int a;
	char b;
	scanf("%c",&b);
	a=(int)b;
	if((a<=122) && (a>=97))
		printf("lowercase");
	else if((a<=90) && (a>=65))
		printf("uppercase");
	return 0;
}	