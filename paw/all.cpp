#include<bits/stdc++.h>
using namespace std;
int search(int* a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
			return i;
	}
	return -1;
}
int se(int* a,int* b,int x,int y)
{
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(a[i][0]==b[j][0])
				if(a[i][1]==b[j][1])
					return 1;
			else if(a[i][0]==b[j][1])
				if(a[i][1]==b[j][0])
					return 1;	
		}	
	}
}
int main()
{
	int n;
	cin>>n;
	set<int>s;
	for(int i=0;i<n;i++)
		s.insert(i+1);
	int x,y;
	cin>>x>>y;
	int a[n]={0}
	int xx[x][2];
	int yy[y][2];
	int q=0;
	for(int i;i<x;i++)
	{
		int m,n;
		cin>>m>>n;
		xx[i][0]=m;
		xx[i][1]=n;
		a[q]=m;
		q++;
		a[q]=n;
		q++;
		s.remove(m);
		s.remove(n);
	}
	for(int i;i<y;i++)
	{
		int m,n;
		cin>>m>>n;
		yy[i][0]=m;
		yy[i][1]=n;
	}
	if(se(xx,yy,x,y)==1)
	{
		cout<<-1;
		return 0;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<y;j++)
		{
			if((a[i]==yy[j][0]) && (a[i+1]==yy[j][1]))
			{
				int z=serch(a,n);
				if(z!=0)
				{
					int zz=a[z]
				}
			}
			else if((a[i]==yy[j][1]) && (a[i+1]==yy[j][0]))
			{

			}
		}
	}
}