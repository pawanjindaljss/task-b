#include <stdio.h>
int main()
{
	int n,x,y,sum1=0,result;
	int a[100];
	scanf("%d %d",&x,&y);
	n=y-x;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum1 += a[i];
	}
	for(i=x;i<=y;i++)
	{
		sum2 += x;
	}
	result=sum2-sum1;
	printf("num is ",result)
}