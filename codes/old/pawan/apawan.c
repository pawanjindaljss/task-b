#include <stdio.h>
void main()
{
	int i,j;
	char c='A',small='a';
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=(i+1);j++)
		{
			if(c<='Z')
			{
				printf("%c",c);
				c++;
			}
			else
			{
				printf("%c",small++);
				if(small=='z')
				{
					printf("%c",small);
					break;
				}
			}
		}
		printf("\n");
	}
}
