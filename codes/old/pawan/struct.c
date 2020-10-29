#include <stdio.h>
void main()
{
	int i,j,k;
	printf("enter the value of book ");
	scanf("%d",&k);
	struct book
	{
		char name[10];
		int pages;
		float price;
	};
	struct book a[k];
	for(i=0;i<k;i++)
	{
		printf("enter book name,pages,prices ");
		scanf("%s %d %f",a[i].name,&a[i].pages,&a[i].price);
	}
	for(i=0;i<k;i++)
	{
		printf("book name is %s,pages %d, prices %f",a[i].name,a[i].pages,a[i].price);
		printf("\n");
	}
}