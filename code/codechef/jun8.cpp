#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int A[2000][2000];
        cin>>n;
        if(n==1)
        {cout<<"Hooray\n";
        cout<<"1\n";}
        else 
        {if(n%2==1 && n!=1)
        {cout<<"Boo\n";}
        else
        {
            cout<<"Hooray\n";
            for(int i = 0;i<n;i++)
                A[i][i] = 1;
            for(int i = 0;i<n/2;i++)
            {
                for(int j = i+1;j+i<n;j++)
                {
                    A[i][j] = i + 1 + j;
                }
            }
            for(int j=n-2;j>n/2;j--)
            {
                for(int i = n - j;j>i;i++)
                    A[i][j] = i+j+2-n;
            }
            for(int i = 1;i<n/2;i++)
            {
                A[i][n-1] = 2*i+1;
            }
            for(int i = n/2;i<n-1;i++)
            {
                A[i][n-1] = (i - n/2 + 1)*2;
            }
            for(int i = 1;i<n;i++)
            {
                for(int j = 0;i>j;j++)
                {
                    A[i][j] = A[j][i] + n-1;
                }
            }

            for(int i = 0;i<n;i++)
            {
                for(int j = 0;j<n;j++)
                {cout<<A[i][j]<<" ";}
                cout<<"\n";
            }


        }
        }
        
    }
}