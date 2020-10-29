#include <stdio.h>
void main()
{
	struct book
	{
		char name;
		int pages;
		float price;
	};
	struct book b,c;
	struct book a={'w',250,369.0};
	b.name=a.name;
	b.pages=a.pages;
	b.price=a.price;
	c=b;
	printf("%c %d %f\n",a.name,a.pages,a.price);
	printf("%c %d %f\n",b.name,b.pages,b.price);
	printf("%c %d %f\n",c.name,c.pages,c.price);
}