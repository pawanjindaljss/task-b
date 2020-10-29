#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL,*q,*newNode;
void push()
{
    int num;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    newNode->data=num;
    if(top==NULL)
    {
        newNode->next=NULL;
        top=newNode;
    }
    else
    {
        newNode->next=top;
        top=newNode;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=top;
        printf("Deleted element is %d\n",top->data);
        top=top->next;
        free(q);
    }
}
void display()
{
    if(top==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=top;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("1.Push\n2.pop\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    default: printf("Invalid choice!!!!");
        }
    }
    return 0;
}