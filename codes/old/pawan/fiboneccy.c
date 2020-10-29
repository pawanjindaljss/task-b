#include <stdio.h>
void main()
{
  	int i, n, t1 = 0, t2 = 1, nextTerm,j,a[25];
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci value: ");

    for (i = 0; i <= n; i++)
    {  
    	a[i] = t1;    
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("%d \n", a[n]); 
}
