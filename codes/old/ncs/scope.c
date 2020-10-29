#include <stdio.h>
int main()
{
	static int v=5;
	printf("%d\n",v--);
	if(v)
		main();
	return 0;
}