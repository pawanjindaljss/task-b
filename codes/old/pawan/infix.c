#include <stdio.h>
char stack[10];
int top=0;
void push(char a)
{
    stack[top++]=a;
}
char pop()
{
return stack[top--];
}
int main()
{
int i=0,j=0;
char infix[20],post[20];
printf("Enter element of expression: ");
scanf("%s",infix);
while(infix[i++]!='\0')
{
    if((infix[i]=='+')||(infix[i]=='*'))
    {
   	 if(infix[i]=='*')
   		 post[i]=pop();
   		 
   	 else
   		 push(infix[i]);
    }
    else
    {
   	 post[i]=infix[i];
    }
}
printf("%s",post);
return 0;
}

