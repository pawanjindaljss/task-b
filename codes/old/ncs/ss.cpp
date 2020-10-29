#include <stdio.h>
#include <string>
int main()
{
	int a;
	scanf("%d",&a);
	char s[a];
	gets(s);
		
	for(int i=0;((s[i]!='\0'));i++)
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
		puts("%s",s[i]);
	}
	return 0;
}