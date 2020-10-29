#include <stdio.h>
#include <string.h>
int main()
{
	int length,i;
	char testing[100];
	scanf("%s",testing);
	length = strlen(testing);
	for(i=length-1;i>=0;i--)
		printf("%c",testing[i]);
	return 0;
}