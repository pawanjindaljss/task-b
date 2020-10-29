#include <stdio.h>
//#define found 1
//#define notfound 0
void main()
{
	int a,i,j,found=0;
	char list[6][10]={
		"pawan",
		"aryan",
		"nitin",
		"rahul",
		"sarad",
		"gyani"
	};
	char name[10];
	printf("%s",list[0]);
	printf("enter your name ");
	scanf("%s",name);
	for(i=0;i<6;i++)
	{
		a=strcmp(&list[i][0],name);
		if(a==0)
		{
			printf("enter your place");
			found++;
			break;
		}
	}
	if(found==0)
	{
		printf("mismach");
	}
	
}