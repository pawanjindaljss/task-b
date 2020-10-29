#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 5
int q[max];
int frnt=-1,rear=-1;
void insertion();
void deletion();
void display();
void main()
{
	int i,ch;
	while(1)
	{
		printf("\n1.insertion");
		printf("\n2.deletion");
		printf("\n3.exit");
		printf("\n4.display");
		printf("\nenter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
					 insertion();
					 break;
			case 2 : 
					 deletion();
					 break;
			case 3 : 
					 break;
			case 4 : 
					 display();
					 break;
			default :
					  printf("Wrong choice");
		}
	}
}
void insertion()
{
	int item;
	if((frnt==0 && rear==max-1) || (frnt==rear+1))
		{
			printf("queue is overflow");
			exit(1);
		}
	if(frnt==-1)
	{
		frnt=0;
		rear=0;
	}
	else
	{
		if(rear==max-1)
			rear=0;
		else
			rear++;
	}
	printf("Enter the element :");
	scanf("%d",&item);
	q[rear]=item;	
}
void deletion()
{
	if(frnt==-1)
		printf("underflow");
	if(frnt==rear)
	{
		q[frnt]='\0';
		frnt=-1;
		rear=-1;
	}
	else
	{
		if(frnt==max-1)
		{
			q[frnt]='\0';
			frnt=0;
		}
		else
		{
			q[frnt]='\0';
			frnt++;
		}
	}
}
void display()
{
	printf("the queue is :");
	if(frnt <= rear)
	{
		while(frnt<=rear)
		{
			printf("%d",q[frnt]);
			frnt++;
		}
	}
	else
	{
		while(rear<=frnt)
		{
			printf("%d",q[rear]);
			rear++;
		}
	}
}