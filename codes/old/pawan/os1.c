#include <stdio.h>
#include <stdlib.h>
void bubble(int ar[],int len)
{
	int i,j,tmp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(ar[j+1]<ar[j])
			{
				tmp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=tmp;
			}
		}
	}
	printf("\narray after bubble sorting: ");
	for(i=0;i<len;i++)
	{
		printf("%d",ar[i]);
		printf(" ");
	}
	printf("\n");
}
void lsearch(int a[],int lmt)
{
	int i,j,num,found=0,pos;
	printf("enter the number which you want to search: ");
	scanf("%d",&num);
	for(i=0;i<lmt;i++)
	{
		if(a[i]==num)
		{
			found++;
			pos=i+1;
		}	
	}
	if(found>0)
		printf("%d number is found at %dst position\n",num,pos);
	else
		printf("number is not found\n");
}
void binary(int a[],int lmt)
{
   int i,j,search,middle,first=0,last=lmt-1,tmp=0;
   printf("enter the number which you want to search: ");
   scanf("%d",&search);
   for(i=0;i<lmt;i++)
	{
		for(j=0;j<lmt-1;j++)
		{
			if(a[j+1]<a[j])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	tmp=0;
    middle = (first+last)/2;
    while (first <= last) 
    {
       if (a[middle] < search)
      		first = middle + 1;    
       else if (a[middle] == search) 
       {
          tmp=1;
          break;
       }
       else
        	last = middle - 1;
 
     	 middle = (first + last)/2;
    }
   	if(tmp==1)
   		printf("Number %d is fount at \n",search);
   	else
   		printf("Not fountd\n");
}
void selection(int a[],int lmt)
{
	int i,j,tmp,pos,min;
	for(i=0;i<(lmt-1);i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<lmt;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
	}
	printf("\narray after selection sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%2d ",a[i]);
	}
	printf("\n");
}
void insertion(int a[],int lmt)
{
	int i,j,temp;
	for(i=1;i<lmt;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\narray after Insertion sorting: ");
	for(i=0;i<lmt;i++)
	{
		printf("%2d  ",a[i]);
	}
	printf("\n");
}
int main()
{
	int i,j,lmt,temp,arr[20];
	printf("enter the limit of array: ");
	scanf("%d",&lmt);
	printf("enter the element of array: ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&arr[i]);
	}
	do
	{
		printf("1:Linera Search\n2:Binary Search\n3:Bubble Sort\n4:Selection Sort\n5:Insertion Sort\n6:Exit\n");
		scanf("%d",&temp);
		switch(temp)
		{
			case 1:
				lsearch(arr,lmt);
				break;
			case 2:
				binary(arr,lmt);
				break;
			case 3:
				bubble(arr,lmt);
				break;
			case 4:
				selection(arr,lmt);
				break;
			case 5:
				selection(arr,lmt);
				break;
			case 6:
				exit(1);
			default:
				printf("Wrong input\n");
		}
	}while(1);
	return 0;
}