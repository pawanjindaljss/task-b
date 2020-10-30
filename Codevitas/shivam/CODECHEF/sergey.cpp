#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
#define gc() getchar_unlocked()

int main() {
	int t,n,k,e,m,i,j,result,a[10000],temp,t1;
	memset(a, 0 , sizeof(a));
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d %d",&n,&k,&e,&m);
	    for(i=0;i<n-1;i++){
	        a[i] = 0;
	        for(j=0;j<e;j++){
	            scanf("%d",&temp);
	            a[i] += temp;
	        }
	    }
	    sort(a,a+n-1, std::greater<int>());
	    temp = a[k-1];
	    a[n-1]=0;
	    for(i=0;i<e-1;i++){
	        scanf("%d",&t1);
	        a[n-1] += t1;
	    }
	    temp = temp - a[n-1];
	    if (temp >= 0){
	        if (temp >= m){
	            printf("Impossible\n");
	        }
	        else {
	            printf("%d\n",(temp+1));
	        }
	    }
	    else {
	        printf("Impossible\n");
	    }
	}
	return 0;
}
