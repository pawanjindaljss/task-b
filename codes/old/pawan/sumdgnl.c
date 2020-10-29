#include <stdio.h>
void main()
{
	int r,c,i,j,a[5][5],s1=0,s2=0;
	printf("enter the value of r & c: ");
	scanf("%d %d",&r,&c);
	printf("enter matrix ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<(r-1);i++)
	{
		for(j=0;j<(c-1);j++)
		{
			if(i<j)
				s1=s1+a[i][j];
			else
				s2=s2+a[i][j];
		}		
	}	
	printf("sum of above diagonal matrix %d: \n",s1);
	printf("sum of below diagonal matrix %d: ",s2);
}