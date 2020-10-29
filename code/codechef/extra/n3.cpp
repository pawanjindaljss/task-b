#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	//char vowel={'a','e','i','o','u'};
	while(t--)
	{
		int l;
		cin>>l;
		int m[26]={0},n[26]={0},mm[26]={0},nn[26]={0};
		string s[l];
		int k=0;
		for(int i=0;i<l;i++)
		{
			cin>>s[i];
			string ss=s[i];w
			int x[26]={0},a[5]={0};
			for(int j=0;j<ss.length();j++)
			{
				int z=(int)ss[j]-97;
				//cout<<z<<" ";
				x[z]++;
				if(ss[j]=='a')
					a[0]++;
				if(ss[j]=='e')
					a[1]++;
				if(ss[j]=='i')
					a[2]++;
				if(ss[j]=='o')
					a[3]++;
				if(ss[j]=='u')
					a[4]++;
			}
			//cout<<endl;
			int f=0,sum=0;
			for(int j=0;j<5;j++)
			{
			    //cout<<a[j]<<" ";
				/*if(a[j]>1)
				{
					f=1;
				    break;	
				}*/
				sum+=a[j];
			}
			if(sum>=(ss.length()-sum))
			    f=1;
			//cout<<f<<endl;
			if(f)
			{
				k++;
				for(int j=0;j<26;j++)
				{
					m[j]+=x[j];
					if(x[j])
						mm[j]++;
				}
			}
			else
			{
				for(int j=0;j<26;j++)
				{
					n[j]+=x[j];
					if(x[j])
						nn[j]++;
				}
			}
		}
		//cout<<k<<endl;
		long long int num_occ1=1,num_occ2=1,total_num_occ2=1,total_num_occ1=1;
		for(int i=0;i<26;i++)
		{
		    if(mm[i])
			{
			    num_occ1*=mm[i];
			    total_num_occ1*=m[i];
			}
		}
		total_num_occ1=pow(total_num_occ1,k );
		for(int i=0;i<26;i++)
		{
			if(nn[i])
			{
			    num_occ2*=(nn[i]);
			    total_num_occ2*=n[i];
			}
		}
		total_num_occ2=pow(total_num_occ2,l-k);
		/*for(int i=0;i<26;i++)
		{
			cout<<m[i]<<" "<<n[i]<<" "<<mm[i]<<" "<<nn[i]<<endl;
		}*/
		double r=(double)num_occ1/total_num_occ1;//double(num_occ1*total_num_occ2);
		double rr=(double)total_num_occ2/total_num_occ2;//double(total_num_occ1*num_occ2);
		//cout<<num_occ1<<" "<<total_num_occ1<<endl;
		//cout<<num_occ2<<" "<<total_num_occ2<<endl;
		//cout<<r<<" "<<rr<<endl;
		double result=r/rr;
		if(result>10000000)
			cout<<"Infinity"<<endl;
		else
		{
			cout<<fixed;
			cout<<setprecision(7)<<result<<endl;
		}
	}
}	