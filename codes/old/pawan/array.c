#include <stdio.h>
#include <string.h>
int main() 
  { 
  char arr[20],arr2[20]={"_World"}; 
  int len; 
  printf("Enter the first string - "); 
  scanf("%s",arr); 
  len = strlen(arr); 
  printf("Length of this string - %d\n",len); 
  printf("Second string is - %s\n",arr2); 
  strcat(arr,arr2); 
  printf("Combined string is - %s\n",arr); 
  printf("Given 2nd string is - %s\n",arr2); 
  strcpy(arr2,arr); 
  printf("New copied with -  %s\n",arr2); 
  return 0; 
  } 