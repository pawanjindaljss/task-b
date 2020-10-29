#include <stdio.h>
void main()
{
   int i,p,j,lmt,pivot,tmp,a[20];
   printf("enter the limit of array: ");
   scanf("%d",&lmt);
   printf("enter the element of array: ");
   for(i=0;i<lmt;i++)
   {
      scanf("%d",&a[i]);
   }
   pivot=a[lmt-1];
   for(j=0;j<lmt-1;j++)
      {
         if(a[j]<=pivot)
         {
            i++;
            tmp=a[j];
            a[j]=a[i];
            a[i]=tmp;       
         }
      }
      tmp=a[i+1];
      a[i+1]=a[lmt-1];
      a[lmt-1]=tmp;
   printf("\narray after sorting: ");
   for(i=0;i<lmt;i++)
   {
      printf("%d",a[i]);
      printf(" ");
   }
}