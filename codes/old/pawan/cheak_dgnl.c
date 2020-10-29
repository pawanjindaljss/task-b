#include <stdio.h>
void main()
{
	int i,j,a[3][3],fnd=0;
	printf("enter element: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
				if(i != j && a[i][j]==0)
					fnd++;
			}
	}
	if(fnd>=6)
		printf("it is diagonal matrix");
	else
		printf("it is not diagonal matrix\n");
}