#include <stdio.h>
int main()
{
	int n,m,l,i;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d%d",&n,&m);
		while(m!=0)
		{
			n=n^m;
			m=(n&m)/10<<1;
		}
	printf("%d\n",n);
	}
	return 0;
}
