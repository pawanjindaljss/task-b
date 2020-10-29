			#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
	char a[]={"IamGreat"};
	char b[8];
	int j;
	cin>>j;
	while(j--)
	{
		scanf("%s",b);
		int count=0;
    	for(int i=0;i<8;i++)
    	{
    		if(a[i]==b[i])
    			count++;
    	}
    	if (count==8)
        cout << "Yes "<<endl;
    	else
    	cout<<"No "<<endl;
	}
}