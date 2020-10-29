#include <stdio.h>
void main()
{
	int i, j;
	for(i=2; i<10; i++)
	{
		for(j=2; j<= (i/j); j++)
		{
			if(!(i%j)) 
				break;
		}	
			if(j > (i/j)) 
			{
					printf("%d is prime\n", i);	
			}			
	}
}