#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(rear==NULL)
	{
		rear=newnode;
		front=newnode;
		return;
	}
	rear->next=newnode;
	rear=rear->next;
}
void dequeue()
{
	struct node *temp;
	if(rear==NULL)
		printf("Underflow\n");
	else
	{
		temp=front;
		printf("dequeued value is %d\n",temp->data);
		front=front->next;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=front;
	if(rear==NULL)
		printf("underflow");
	else
	{
		while(temp!=NULL)
		{
			printf("%d-> ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
int main()
{
	int a,ch,value;
	printf("This is single Queue using Linked List\n");
	do
	{
		printf("1-insert\n2-delete\n3-display\n4-grater than 3 \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter value: ");
			scanf("%d",&value);
			enqueue(value);
		}
		else if(ch==2)
			dequeue();
		else if(ch==3)
			display();
		else
			exit(0);
		
	}while(1);
	return 0;
}