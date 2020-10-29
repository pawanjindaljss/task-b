#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <malloc.h>
#include <math.h>
using namespace std;

char* minimumCost(char* input1[],int input2)
{
	int l,i,j, l1;
	l1 = strlen(input1[0]);
	l = (strlen(input1[0])/2);
	int m[input2+1][l+1], a[input2+1][l+1];
	char p[input2+1][l+1];
	int c = 0;
	for(i=0;i<input2; i++){
		c = 0;
	    for (j=0;j < l1; j++){
	        if (input1[i][j] >= '0' && input1[i][j] <= '9'){
	        	a[i][c] = input1[i][j] - '0';  
	        	c = c+1;
	        }
	    }
	}


	m[0][0] = a[0][0];
    for(i=1;i < c ; i++){
    	 m[0][i] = m[0][i-1] + a[0][i];
    	 // cout << i << " "  << m[0][i] << endl;
    	 p[0][i] = 'R';
    }
    
    for(i=1;i < input2 ; i++){
    	 m[i][0] = (m[i-1][0] + a[i][0]);
    	 p[i][0] = 'B';
    }

    for(i=1; i< input2; i++){
    	for(j=1;j<c;j++){
    		if (m[i-1][j-1] <= m[i][j-1]){
    			if (m[i-1][j-1] <= m[i-1][j]){
    				m[i][j] = (m[i-1][j-1] + a[i][j]);
    				p[i][j] = 'D';
    			}
    			else {
    				m[i][j] = (m[i-1][j] + a[i][j]);
    				p[i][j] = 'B';
    			}
    		}
    		else {
    			if (m[i][j-1] <= m[i-1][j]){
    				m[i][j] = (m[i][j-1] + a[i][j]);
    				p[i][j] = 'R';
    			}
    			else {
    				m[i][j] = (m[i-1][j] + a[i][j]);
    				p[i][j] = 'D';
    			}
    		}
    	}
    } 

    
    input2--;
    c--;
   	char *path;
   	int temp = 0, ind;
   	ind = temp = log10(m[input2][c])+1;
   	path = (char*)malloc(sizeof(char)*(temp+input2+c+3));
   	while(m[input2][c]){
   		path[temp-1] = m[input2][c]%10 + '0';
   		temp--;
   		m[input2][c]/=10;
   	}
   	path[ind++] = ',';
   	temp = 0;
   	int input21, c1;
   	input21 = input2;
   	c1 = c;
    while (input2 > 0 || c > 0){
    	// ptr = p[input2][c] + ptr;
    	temp++;
        if( p[input2][c] == 'D'){
        	 input2-=1;
        	 c--;
        }
        else if (p[input2][c] == 'R')
            c-=1;
        else 
            input2-=1;
    }
    ind += temp-1;
    while (input21 > 0 || c1 > 0){
    	path[ind] = p[input21][c1];
    	ind--;
        if( p[input21][c1] == 'D'){
        	 input21-=1;
        	 c1--;
        }
        else if (p[input21][c1] == 'R')
            c1-=1;
        else 
            input21-=1;
    }

    return path;
}

int main(){
	char *p[5];
	p[0] = "1#7#9#2";
	p[1] = "8#6#3#2";
	p[2] = "1#6#7#8";
	p[3] = "2#9#8#2";
	cout << minimumCost(p, 4);
}