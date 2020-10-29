/*     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 								   JJ			JJ
     ******************* PP 									JJ			JJ
     ******************* PP 					.....			 JJ			JJ
     ******************* PP 					.....			  JJ		    JJ
     ******************* PP                		.....			   JJJJJJJJJJJ
*/
#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define begin_end(a) a.begin(),a.end()
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
//int Binser(int Start,int S){
////	if(S<0) return -1;
//	int Le=Start+1,Ri=N,Mid,Save=0;
//	while(Le<=Ri){
//		Mid=(Le+Ri)/2;
//		if(S>=Pref[Mid]-Pref[Start]){
//			Save=Mid;
//			Le=Mid+1;
//		} else Ri=Mid-1;
//	}
//	return Save;
//}
#define int long long
/*     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 								   JJ			JJ
     ******************* PP 									JJ			JJ
     ******************* PP 					.....			 JJ			JJ
     ******************* PP 					.....			  JJ		    JJ
     ******************* PP                		.....			   JJJJJJJJJJJ
*/
signed main() 
{
	int t;
	cin>>t;
	while(t--){
		int n,m,x1=1,sum=0;
		int cnt=0,cnt2=0;
		
		cin>>n>>m;
		int x[n];
		int y[m];
		int array1[500001],array2[500001],array3[500001],array4[500001];
		memset(array1,0,sizeof(array1));
		memset(array2,0,sizeof(array2));
		memset(array3,0,sizeof(array3));
		memset(array4,0,sizeof(array4));
		for(int i=0;i<n;i++)
		{
		    cin>>x[i];
		    if(x[i]>0)
		    	array1[x[i]]=1;
	    	else if(x[i]<0)
	    		array2[abs(x[i])]=1;
		    x[i]=abs(x[i]);
			if(x[i]==0)
				cnt=1;
		}
		for(int j=0;j<m;j++)
		{
		
			cin>>y[j];
		 	if(y[j]>0)
			 	array3[y[j]]=1;
	    	else if(y[j]<0)
	    		array4[abs(y[j])]=1;
			y[j]=abs(y[j]);
				if(y[j]==0)
					cnt2=1;
		}
		for(int i=0;i<n;i++)
		{
			map <int,int> m1;
			int te=x[i];
			while(te%2==0)
			{
				m1[2]++;
				m1[2]++;
				te/=2;
			}
		  	for (int i1 = 3; i1 <= sqrt(x[i]); i1+=2)  
    		{	  
      
		        while (te % i1 == 0)  
		        {  
		        	
		            m1[i1]++;
		            m1[i1]++;
		            te = te/i1;  
		        }
		    }
        	if(te>=2)
        	{
	        	m1[te]++;
	        	m1[te]++;
	        }
   			vector<vector<int> > v(m1.size());
		    int tempo=0;
		    for(auto it:m1)
		    {	
		     	for(int iy=0;iy<=it.second;iy++)
		     		v[tempo].push_back(pow(it.first,iy));
		     	tempo++;
		    }
		   	vector<vector<int>> ans(v.size()+1);
		  	ans[0].push_back(1);
		  	for(int i1=0;i1<v.size();i1++)
		  		for(int i2=0;i2<ans[i1].size();i2++)
		  			for(int i3=0;i3<v[i1].size();i3++)
		  				ans[i1+1].push_back(ans[i1][i2]*v[i1][i3]);
		  		
		  	for(int j=0;j<ans[v.size()].size();j++)
		  	{
				int temp1=ans[v.size()][j];
				int temp2=(x[i]*x[i])/temp1;
				if(temp2<=100000 && temp1<=100000)
					if(temp2<=100000 && array3[temp1]!=0 && array4[temp2]!=0)
					sum++;
				if(temp2<=100000 && temp1<=100000)
					if(temp2<=100000 && array3[temp2]!=0 && array4[temp1]!=0)
						sum++;
			}
		
			m1.clear();
			int tempp=v.size();
            for(int i=0;i<tempp;i++)
            	v[i].clear();
            v.clear();
            ans.clear();
		}
		
			for(int i=0;i<m;i++)
			{
				map <int,int> m1;
				int te=y[i];
			   	for (int i1 = 2; i1 <= sqrt(y[i]); i1++)  
    			{  
      
			        while (te % i1 == 0)  
			        {  
			        	
			            m1[i1]++;
			            m1[i1]++;
			            te = te/i1;  
			        }
			    }
		        if(te>=2)
		        {
		        	m1[te]++;
		        	m1[te]++;
		        }
   				vector<vector<int> > v(m1.size());
    int tempo=0;
    for(auto it:m1)
    {
    	
     for(int iy=0;iy<=it.second;iy++)
     	v[tempo].push_back(pow(it.first,iy));
     tempo++;
    }
   	vector<vector<int>> ans(v.size()+1);
  	ans[0].push_back(1);
  	for(int i1=0;i1<v.size();i1++)
  		for(int i2=0;i2<ans[i1].size();i2++)
  			for(int i3=0;i3<v[i1].size();i3++)
  				ans[i1+1].push_back(ans[i1][i2]*v[i1][i3]);
	for(int j=0;j<ans[v.size()].size();j++)
	{
		int temp1=ans[v.size()][j];
		int temp2=(y[i]*y[i])/temp1;
		if(temp2<=100000 && temp1<=100000)
		if(array1[temp1]!=0 && array2[temp2]!=0)
			sum++;
		if(temp2<=100000 && temp1<=100000)
			if(array1[temp2]!=0 && array2[temp1]!=0)
				sum++;	
		}
               	m1.clear();
			int tempp=v.size();
            for(int i=0;i<tempp;i++)
            	v[i].clear();
            v.clear();
            ans.clear();}
		sum/=2;
		if(cnt==1 && cnt2==1)
			sum+=(n-1)*(m-1);
		
		else if(cnt==1)
			sum+=(n-1)*m;
		else if(cnt2==1)
			sum+=n*(m-1);
		cout<<sum<<endl;
	}
}
/*     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PP           PP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PPPPPPPPPPPPPPP 									JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 												JJ
     ******************* PP 								   JJ			JJ
     ******************* PP 									JJ			JJ
     ******************* PP 					.....			 JJ			JJ
     ******************* PP 					.....			  JJ		    JJ
     ******************* PP                		.....			   JJJJJJJJJJJ
*/