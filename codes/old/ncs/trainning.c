#include <stdio.h>
int find(int n) 
{ 
    int count = 0,i; 
    for (i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
    return count; 
}
int main() 
{ 
    int n,r;
    scanf("%d",&n); 
    r=find(n); 
    printf("%d",r);
    return 0; 
} 