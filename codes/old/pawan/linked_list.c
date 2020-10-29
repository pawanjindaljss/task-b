#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*q,*newNode;
void insert_beg();
void insert_end();
int insert_pos();
void display();
void delete_beg();
void delete_end();
int delete_pos();
int main()
{
    int ch;
    while(1)
    {
        printf("---- Singly Linked List(SLL) Menu ----");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n");
        printf("Make choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\n----MENU----");
                    printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
                    printf("\nMake choice: ");
                    scanf("%d",&ch);
                    switch(ch)
                    {
                        case 1: insert_beg();
                                break;
                        case 2: insert_end();
                                break;
                        case 3: insert_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Invalid choice!!!!");
                    }
                    break;
            case 2: display();
                    break;
            case 3: printf("\n---- Delete Menu ----");
                    printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
                    printf("\nMake choice: ");
                    scanf("%d",&ch);
                    switch(ch)
                    {
                        case 1: delete_beg();
                                break;
                        case 2: delete_end();
                                break;
                        case 3: delete_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Invalid choice!!!!");
                    }
                    break;
            case 4: exit(0);
                    default: printf("Invalid choice!!!!");
        }
    }
    return 0;
}
void insert_beg()
{
    int num;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    newNode->data=num;
    if(head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}
void insert_end()
{
    int num;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    newNode->data=num;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        q=head;
        while(q->next!=NULL)
        q=q->next;
        q->next=newNode;
    }
}
int insert_pos()
{
    int pos,i,num;
    if(head==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    newNode->data=num;
    q=head;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
    q=q->next;
    }
    newNode->next=q->next;
    q->next=newNode;
    return 0;
}
void display()
{
    if(head==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=head;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}
void delete_beg()
{
    if(head==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=head;
        head=head->next;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}
void delete_end()
{
    if(head==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=head;
        while(q->next->next!=NULL)
        q=q->next;
        newNode=q->next;
        q->next=NULL;
        printf("Deleted element is %d",newNode->data);
        free(newNode);
    }
}
int delete_pos()
{
    int pos,i;
    if(head==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
    printf("Enter position to delete:");
    scanf("%d",&pos);
    q=head;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
             printf("There are less elements!!");
            return 0;
        }
        q=q->next;
    }
    newNode=q->next;
    q->next=newNode->next;
    printf("Deleted element is %d",newNode->data);
    free(newNode);
return 0;
}