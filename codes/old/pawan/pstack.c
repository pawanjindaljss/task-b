#include <stdio.h>
struct stack
{
	int stk[10];
	int top;
};
struct stack s;
void push()
{
	int a;
	if(s.top==9) printf("Overflow");
	else{	printf("Enter the data: ");
	scanf("%d",&a);
	s.stk[++s.top]=a;}
}
int pop()
{
	int a;
	if(s.top==-1) printf("Underflow");
	else
	{
		return s.stk[(s.top)--];
	}
}
void traverse()
{
	int i=s.top;
	for(;i>=0;i--)
	printf("%d ",s.stk[i]);
	printf("\n");
}
void main()
{
	int a=0,temp;
	s.top=-1;
	while(a<=4){
		printf("1.Push\n2.Pop\n3.traverse\n4.Exit\n");
		scanf("%d",&a);
		if(a==1) push();
		if(a==2) 
		{
			temp=pop();
			printf("%d\n",temp);
		}
		if(a==3) traverse();
		if(a==4) break;
	}
}