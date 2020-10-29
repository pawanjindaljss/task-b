# include <stdio.h>
void main()
{
	int a,b,c,d,i,j,fm[3][3],sm[3][3],addm[3][3];
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			scanf("%d",&fm[a][b]);
		}
	}
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
			addm[i][j]=fm[i][j]+sm[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",addm[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}