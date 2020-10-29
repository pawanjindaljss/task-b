#include <stdio.h>
void main()
{
	int a[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}
}