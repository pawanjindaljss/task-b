#include <stdio.h>
void main()
{
	int a[10][10],r,c,i,j,upp=0,blo=0;
	printf("enter the limit of row & coloum: ");
	scanf("%d %d",&r,&c);
	printf("enter the element of row & coloum: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(i<j)
				upp=upp+a[i][j];
			else
				blo=blo+a[i][j];
		}
	}
	printf("upper trigonal element sum: %d",upp);
	printf("\nlower trigonal element sum: %d",blo);
}