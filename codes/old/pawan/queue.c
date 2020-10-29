#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int array[MAX];
int rear = - 1;
int front = - 1;
void enqueue()
{
    int item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Enter number : ");
        scanf("%d", &item);
        rear = rear + 1;
        array[rear] = item;
    }
}
int delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return 0;
    }
    else
    {
        return array[front++];
    }
}
int search()
{
    int i,j,f=0;
    for(i=front;i<rear;i++)
    {
        for(j=i;j<=rear;j++)
        {
            if(array[i]==array[j])
                f=1;
        }
    }
    return f;
}
void display()
{
    int i;
    if (front == - 1 || (front>rear))
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", array[i]);
        printf("\n");
    }
}
int main()
{
    int choice,temp,s;
    while (1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.do want search duplicate element\n5.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            temp=delete();
            printf("Element deleted from queue is : %d\n", temp);
            break;
            case 3:
            display();
            break;
            case 4:
            s=search();
            if(s==1)
                printf("Yes duplicate element in the queue\n");
            else
                printf("No duplicate element in the queue\n");
            break;
            case 5:
            exit(0);
        }
    }
    return 0;
}