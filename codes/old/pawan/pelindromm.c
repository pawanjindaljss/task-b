#include <stdio.h>
void main()
{
	int i,j,k=0,l=0;
	char c[26],small[26];
	c[k]='A';
	small[l]='a';
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=(i+1);j++)
		{	
			if(k<26)
			{
				printf("%c",c[k++]);
				c[k]=++c[0];
			}
			else
			{
				printf("%c",small[l++]);
				small[l]=++small[0];
				if(l==26)
				{
					break;
				}
			}
		}
		printf("\n");
	}
}
