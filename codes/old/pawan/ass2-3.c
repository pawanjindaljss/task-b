#include <stdio.h>  
#include <string.h>  
#define max 20 
int top=-1;
char stack[max];  
  
void push(char x)
{  
    if(top == max-1)  
        printf("stack overflow");  
	else 
	{  
        stack[++top]=x;  
    }  
  
}
void pop(char x)
{  
    x=stack[top--];
}    
int main()  
{  
   char str[20];
   scanf("%s",str);  
   int len = strlen(str);  
   int i;  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
	for(i=0;i<len;i++)  
    {
    	pop(str[i]);
    }
    printf("%s",str); 
  	return 0;
}