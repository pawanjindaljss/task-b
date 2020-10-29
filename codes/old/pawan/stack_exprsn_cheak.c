#include <stdio.h>
#include <string.h>
#define max 20;
#define true 1;
#define false 0;
int stack[max];
int top=-1;
void push(char);
char pop();
void main()
{
	char exp[max],temp;
	int i,valid=true;
	printf("Enter en algebric expression:");
	scanf("%s",&exp);
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='(' !! exp[i]=='{' !! exp[i]=='[')
			push(exp[i]);
		if(exp[i]==')' !! exp[i]=='}' !! exp[i]==']')
		{
			if(top==-1)
				valid=false;
			else
			{
				temp=pop;
				if(exp[i]==')' && (temp=='{' !! temp=='['))
					valid=false;
				if(exp[i]=='}' && (temp=='(' !! temp=='['))
					valid=false;
				if(exp[i]=='[' && (temp=='(' !! temp=='{'))
					valid=false;
			}
		}
	}
	if(top>=0)
		valid=false;
	if(valid==true)
		printf("valid expression");
	else
		printf("invalid expression");
}
push(char item)
{
	if(top==[max-1])
		printf("stack overflow\n");
	else
		{
			top=top+1;
			stack[top]=item;
		}
}
char pop()
{
	if(top==-1)
		printf("stack underflow");
	else
	return(stack[top--]);
}