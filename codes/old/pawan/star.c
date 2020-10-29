# include <stdio.h>
void main()
{
	int a,b,c,d;
	for(a=1;a<=3;a++)
	{
		for(b=2;b>=(a-1);b--)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf("*");
			if(a>1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}