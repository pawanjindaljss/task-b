#include <stdio.h>
void main()
{
	int i,l,a[20],max=0,smax=0,loc,sloc,temp;
	printf("enter array limit: ");
	scanf("%d",&l);
	printf("enter array element: ");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		if(max < a[i] )
		{
			max=a[i];
		}
		else
			loc=i;
	}
	temp=a[l-1];
	a[l-1]=a[loc];
	a[loc]=a[l-1];
	for(i=0;i<(l-1);i++)
	{
		if(smax < a[i] )
		{
			smax=a[i];
		}
		else
			sloc=i;
	}
	printf("max num is %d \n",max);
	printf("smax num is %d ",smax);
}