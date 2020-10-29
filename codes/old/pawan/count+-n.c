#include <stdio.h>
void main()
{
	int i,a[5],cntpos=0,cntneg=0;
	printf("enter numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			cntneg++;
		}
		else
			cntpos++;
	}
	printf("possitive nums %d & negetive nums %d",cntpos,cntneg);
}