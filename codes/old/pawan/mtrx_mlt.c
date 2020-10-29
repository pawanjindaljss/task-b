#include <stdio.h>
int main()
{
	int a,b,c,d,i,j,k,l,m,fm[3][3],sm[3][3],addm[3][3],temp;
	printf("Enter first matrix: \n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			scanf("%d",&fm[a][b]);
		}
	}
	printf("Enter second matrix: \n");
	for(c=0;c<3;c++)
	{
		for(d=0;d<3;d++)
		{
			scanf("%d",&sm[c][d]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			temp = 0;
			for(k=0;k<3;k++)
			{
				l=fm[i][k]*sm[k][j];
				temp=temp+l;
			}
			addm[i][j]=temp;
		}
	}
	printf("Final matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d\t",addm[i][j]);
		}
		printf("\n");
	}
	return 0;
}