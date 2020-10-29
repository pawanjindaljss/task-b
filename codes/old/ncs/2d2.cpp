#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int a;
	scanf("%d ", &a);
	char s[a];
	for(int i=0;i<a;i++) 
	{
		scanf("%c", &s[i]);	
	}
	for(int i=0;i<a;i++)
	{
		if((s[i]=='a') || (s[i]=='A'))
			continue;
		if((s[i]=='e') || (s[i]=='E'))
			continue;
		if((s[i]=='i') || (s[i]=='I'))
			continue;
		if((s[i]=='o') || (s[i]=='O'))
			continue;
		if((s[i]=='u') || (s[i]=='U'))
			continue;
		cout<<s[i];
	}
	return 0;
}