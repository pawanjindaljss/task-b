#include <stdio.h>
void main()
{
	int i,j,lmt,num,a[20],found=0,pos;
	printf("enter the limit of array: ");
	scanf("%d",&lmt);
	printf("enter the element of array: ");
	for(i=0;i<lmt;i++)
	{
		scanf("%d",&a[i]);
	}
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