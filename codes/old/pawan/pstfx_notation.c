#include <stdio.h>
#include <string.h>
void main()
{
	char s[80];
	int i,top=-1,n,x=0,y=0,stack[80],
	printf("\n enter the valid postfix notation :");
	scanf("%s",&s);
	n=strlen(s);
	printf("the value of the postfix notation is :");
	for(i=0i<n;i++)
	{
		switch (s[i])
		{
			case'+' :
				y=stack[top];
				x=stack[top-1];
				top=top-1;
				x=x+y;
				stack[top]=x;
				break;
			case'-' :
				y=stack[top];
				x=stack[top-1];
				top=top-1;
				x=x-y;
				stack[top]=x;
				break;
			case'*' :
				y=stack[top];
				x=stack[top-1];
				top=top-1;
				x=x*y;
				stack[top]=x;
				break;
			case'/' :
				y=stack[top];
				x=stack[top-1];
				top=top-1;
				x=x/y;
				stack[top]=x;
				break;
			default :
				top=top+1;
				if(s[i]>=48 && s[i]<=57)
					x=s[i]-48;
				stack[top]=x;
				x=0;
		}
	}
	printf("%d",stack[top]);
}