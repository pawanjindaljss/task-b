#include <stdio.h>
void main()
{
  	int i,j,k,l,a[20],b[20],c[20],m,n;
    printf("enter first array limit: ");
    scanf("%d",&m);
    printf("enter first array element: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter second array limit: ");
    scanf("%d",&n);
    printf("enter second array element: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=j=k=0;
    while(i<m && j<n)
    {
        c[k++]= ( a[i] < b[j] ? a[i++] : b[j++] ) ;
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    printf("marge array is \n");
    for(l=0;l<(m+n);l++)
    {
        printf("%d\n",c[l]);
        printf(" "); 
    }
}   