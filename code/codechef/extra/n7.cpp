//     ******************* PPPPPPPPPPPPPPP						JJJJJJJJJJJJJJJJJJJJJJJ
//     ******************* PPPPPPPPPPPPPPP									JJ
//     ******************* PP           PP 									JJ
//     ******************* PP           PP 									JJ
//     ******************* PP           PP 									JJ
//     ******************* PP           PP 									JJ
//     ******************* PPPPPPPPPPPPPPP 									JJ
//     ******************* PPPPPPPPPPPPPPP 									JJ
//     ******************* PP 												JJ
//     ******************* PP 												JJ
//     ******************* PP 								     			JJ
//     ******************* PP 								   JJ			JJ
//     ******************* PP 									JJ			JJ
//     ******************* PP 					.....			 JJ			JJ
//     ******************* PP 					.....			  JJ		JJ
//     ******************* PP           		.....			   JJJJJJJJJJJ

//   #
#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define mod 10000000000
#define NIL -1
#define pb push_back
const ll N = 100000; 
using namespace std;

class Graph {
	ll V;
	list<ll> *adj;
	list<ll> *cycles;
	void Util(ll v, bool visited[], ll disc[], ll low[], ll parent[], bool ap[]);
	
	public:
	Graph(ll V);
	void addEdges(ll v, ll w);
	int AP(); 
};

Graph::Graph(ll V) {
	this->V = V;
	adj = new list<ll>[V];
}
	
void Graph::addEdges(ll v, ll w) {
	adj[v].pb(w);
	adj[w].pb(v);
}
void Graph::Util(ll u, bool visited[], ll disc[], ll low[], ll parent[], bool ap[]) {
	static ll time = 0;
	ll children = 0;
	visited[u] = true;
	
	disc[u] = low[u] = ++time;
	
	list<ll>::iterator i;
	for(i = adj[u].begin(); i != adj[u].end(); ++i) {
		ll v = *i;
		if(!visited[v]) {
			children++;
			parent[v] = u;
			Util(v, visited, disc, low, parent, ap);
			low[u] = min(low[u], low[v]);
			
			//2 conditions checked for articulation
			if(parent[u] == NIL && children > 1) 
				ap[u] = true;
			else if(parent[u] != NIL && low[v] >= disc[u])
				ap[u] = true;
		}
		else if(v != parent[u]) low[u] = min(low[u], disc[v]);
	}
}

int Graph::AP() {
	bool *visited = new bool[V];
	ll *disc = new ll[V];
	ll *low = new ll[V];
	ll *parent = new ll[V];
	bool *ap = new bool[V];
	
	for(ll i = 0; i < V; ++i) {
		parent[i] = NIL;
		visited[i] = false;
		ap[i] = false;
	}
	
	for(ll i = 0; i <V; ++i) {
		if(visited[i] == false) 
			Util(i, visited, disc, low, parent, ap);
	}
	
	for(ll i = 0; i < V; ++i) {
		if(ap[i] == true) {
			cout << i<<"\n";
			return 0;
		}
		
	}
	return 1;
}

// variables to be used 
// in both functions 
vector<ll> graph[N]; 
vector<ll> cycles[N]; 
  
// Function to mark the vertex with 
// different colors for different cycles 
void dfs_cycle(ll u, ll p, ll color[], 
               ll mark[], ll par[], ll& cyclenumber) 
{ 
  
    // already (completely) visited vertex. 
    if (color[u] == 2) { 
        return; 
    } 
  
    // seen vertex, but was not completely visited -> cycle detected. 
    // backtrack based on parents to find the complete cycle. 
    if (color[u] == 1) { 
  
        cyclenumber++; 
        ll cur = p; 
        mark[cur] = cyclenumber; 
  
        // backtrack the vertex which are 
        // in the current cycle thats found 
        while (cur != u) { 
            cur = par[cur]; 
            mark[cur] = cyclenumber; 
        } 
        return; 
    } 
    par[u] = p; 
  
    // partially visited. 
    color[u] = 1; 
  
    // simple dfs on graph 
    for (ll v : graph[u]) { 
  
        // if it has not been visited previously 
        if (v == par[u]) { 
            continue; 
        } 
        dfs_cycle(v, u, color, mark, par, cyclenumber); 
    } 
  
    // completely visited. 
    color[u] = 2; 
} 
  
// add the edges to the graph 
void addEdge(ll u, ll v) 
{ 
    graph[u].push_back(v); 
    graph[v].push_back(u); 
} 
  
// Function to print the cycles 
int printCycles(ll edges, ll mark[], ll& cyclenumber) 
{ 
  
    // push the edges that into the 
    // cycle adjacency list 
    for (ll i = 1; i <= edges; i++) { 
        if (mark[i] != 0) 
            cycles[mark[i]].push_back(i); 
    } 
  
    // print all the vertex with same cycle 
    if(cyclenumber==1) {
    	cout << cycles[1][0]<<"\n";
    	return 0;
    }
    return 1;
    
} 
  
int main() 
{
	
	int t;
	cin>>t;
	while(t--)	
	 {
			ll n, m;
			ll x, y;
			ll color[N]; 
		    ll par[N]; 
		   
		    ll mark[N]; 
		  
		    ll cyclenumber = 0; 
		    for (auto& v : graph) {
			   v.clear();
			}
		    for (auto& v : cycles) {
			   v.clear();
			}
			cin >> n >> m;
			ll edges = m; 
			Graph g(n+1);
			//cout << n << " " << m <<"\n";
			
			for(ll i = 1; i <= m; ++i) {
				cin >> x >> y;
				//cout << x << " " <<y << "\n";
				g.addEdges(x, y);
				addEdge(x,y);
			}
	    dfs_cycle(1, 0, color, mark, par, cyclenumber); 
	  
	    if(printCycles(edges, mark, cyclenumber)) {
	    	if(g.AP()) cout << "-1"<<endl;
	    }
	}
	return 0;
}