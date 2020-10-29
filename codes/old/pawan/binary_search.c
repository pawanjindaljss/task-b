#include <stdio.h>
int main()
{
   int i,j,search,middle,first,last,lmt,tmp,a[20];
   scanf("%d",&lmt);
   for(i=0;i<lmt;i++)
   {
      scanf("%d",&a[i]);
   }
   scanf("%d",&search);
   while(first<=last)
   {
   first = 0;
   last = lmt - 1;
   middle = (first+last)/2;
   while (first <= last) 
   {
      if (a[middle] < search)
         first = middle + 1;    
      else if (a[middle] == search) 
      {
         printf(" %d.\n",middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   }
   return 0;
}