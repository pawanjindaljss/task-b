//     ******************* PPPPPPPPPPPPPPP  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PP                                               
//     ******************* PP                                               
//     ******************* PP                                               
//     ******************* PP                                    
//     ******************* PP                                             
//     ******************* PP                                             
//     ******************* PP                                             
//     ******************* PP 
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) 
	{
		int n;
		cin>>n;
		vector<pair<int, int>> v;
		int a[n];
		// comparison operation is faster than division operation.
		memset(a, 0, sizeof(a));
		for(int i=0;i<n;i++) 
		{
			int l, r;
			cin>>l>>r;
			v.push_back(make_pair(l, r));
		}
		// comparison operation is faster than division operation. 
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++) 
		{
			int j=i+1;
			while(j < n && v[j].first <= v[i].second) 
			{
			    a[i]++;
				a[j]++;
				j++;
			}
		}
		// comparison operation is faster than division operation.
		if (n == 2 && v[0].second < v[1].first) 
			cout<<"0"<<endl;
		// comparison operation is faster than division operation.
		else if(n == 1) 
			cout<<"-1"<<endl;
		else 
		{
			int z = INT_MAX;
			for(int i=0;i<n;i++) 
				if(a[i] < z) 
					z = a[i];
			if(z == INT_MAX || z == n-1) 
				cout<<"-1"<<endl;
			else 
				cout<<z<<""<<endl;
		}
	}
	return 0;
}
//     ******************* PPPPPPPPPPPPPPP  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PP           PP                                  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PPPPPPPPPPPPPPP                                  
//     ******************* PP                                               
//     ******************* PP                                               
//     ******************* PP                                               
//     ******************* PP                                    
//     ******************* PP                                             
//     ******************* PP                                             
//     ******************* PP                                             
//     ******************* PP