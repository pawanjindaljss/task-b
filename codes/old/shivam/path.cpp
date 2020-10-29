#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;
#ifndef MAX
#define MAX 1000000007
#endif
int checkPrime(int n){
	if (n==1)	
		return 0;
	if (n < 4)
		return 1;
	int i,q =  sqrt(n);
	for(i=2;i<=q;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
long long int countPath(int *mat[], int m, int n){
	bool f=1;
	long long int i, j,count[m][n];
	for(i=0;i<m;i++){
		if(!f or !mat[i][0]){
			f=0;
			count[i][0]=0;
		}
		else
			count[i][0]=1;
	}
	f=1;
	for(i=0;i<n;i++){
		if(!f or !mat[0][i]){
			f=0;
			count[0][i]=0;
		}
		else
			count[0][i]=1;
	}
	for (i = 1; i < m; ++i){
		for (j = 1; j < n; ++j)
		{
			if(!mat[i][j]){
				count[i][j]=0;
			}
			else{
				count[i][j] = ((count[i-1][j]%MAX)+(count[i][j-1]%MAX)+(count[i-1][j-1]%MAX))%MAX;
			}
		}
	}
	return count[m-1][n-1];
}
int main(){
	int i,j,m,n;
	scanf("%d %d",&m, &n);
	int *mat[m];
	for(i=0;i<m;i++){
		mat[i] = new int[n];
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
			if(checkPrime(mat[i][j])){
				mat[i][j] = 1;
			}
			else
				mat[i][j] = 0;
		}
	}
	long long int result = countPath(mat, m, n);
	printf("%lld\n", result);
	if (result){
		int dup[m][n],a,b;
		queue<int> x,y;
		x.push(m-1);
		y.push(n-1);
		dup[m-1][n-1]=1;
		while(true){
			a = x.front();
			b = y.front();
			x.pop();y.pop();
			if(a-1 >= 0 && b-1 >= 0 && mat[a-1][b-1] && dup[a-1][b-1]!=1){
				dup[a-1][b-1]=1;
				if(a-1 ==0 && b-1 ==0)
					break;
				x.push(a-1);
				y.push(b-1);
			}
			if(b-1 >= 0 && (mat[a][b-1]) && dup[a][b-1]!=1){
				dup[a][b-1]=1;
				if(a ==0 && b-1 ==0)
					break;
				x.push(a);
				y.push(b-1);
			}
			if(a-1 >= 0 && mat[a-1][b] && dup[a-1][b]!=1){
				dup[a-1][b]=1;
				if(a-1 ==0 && b ==0)
					break;
				x.push(a-1);
				y.push(b);
			}
		}
		printf("1 1\n");
		i=j=0;
		while(i!=m-1 || j!=n-1){
		    if(i+1 < m && j+1 < n &&  dup[i+1][j+1]==1)
				printf("%d %d\n", ++i +1, ++j+1 );
			else if(i+1 < m && dup[i+1][j]==1){
				printf("%d %d\n", ++i +1 , j+1);
			}
			else if(j+1 < n && dup[i][j+1]==1){
				printf("%d %d\n", i+1, ++j +1);
			}
		}	
	}
	return 0;
}