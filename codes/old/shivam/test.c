#include <stdio.h>

int q(w){int s=w%10;
	w/=10;
	while(w){
		if(w%10==s)return 0;
		s=w%10;w/=10;
	}
		return 1;
}

int q(int input1){
	int m=0;
	while(input1--)
		if(q(input1+1))
			m++;
	return m;
}

int main(){
	int a=356;
	printf("%d",q(a));
}