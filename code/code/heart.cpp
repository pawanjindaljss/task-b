#include <bits/stdc++.h>
using namespace std;
int main() 
{
        int n=7;
        for(int i=-3*n/2;i<=n;i++){
            for(int j=-3*n/2;j<=3*n/2;j++){
    			if((abs(i)+abs(j)<n)||((-n/2-i)*(-n/2-i)+(n/2-j)*(n/2-j)<=n*n/2)||((-n/2-i)*(-n/2-i)+(-n/2-j)*(-n/2-j)<=n*n/2)){
                   cout<<"v ";}
               else
                   cout<<"  ";
            }
               cout<<endl;
        }
    return 0;
}