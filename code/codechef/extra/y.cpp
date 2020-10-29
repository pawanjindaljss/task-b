// C++ program to print all the cycles 
// in an undirected graph 
#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
const ll N = 100000; 
  
class Graph {
    vector<ll> graph[N]; 
    vector<ll> cycles[N];
    
    public:
    void dfs_cycle(ll u, ll p, ll color[], ll mark[], ll par[], ll& cyclenumber);
    void addEdge(ll u, ll v);
    int printCycles(ll edges, ll mark[], ll& cyclenumber);
    
  
};
// variables to be used 
// in both functions 

// Function to mark the vertex with 
// different colors for different cycles 
void Graph::dfs_cycle(ll u, ll p, ll color[], 
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
void Graph::addEdge(ll u, ll v) 
{ 
    graph[u].push_back(v); 
    graph[v].push_back(u); 
} 
  
// Function to print the cycles 
int Graph::printCycles(ll edges, ll mark[], ll& cyclenumber) 
{ 
  
    // push the edges that into the 
    // cycle adjacency list 
    for (ll i = 1; i <= edges; i++) { 
        if (mark[i] != 0) 
            cycles[mark[i]].push_back(i); 
    } 
  
    // print all the vertex with same cycle 
    if(cyclenumber==1) {
        cout << cycles[1][0];
        return 0;
    }
    return 1;
    
} 
  
// Driver Code 
int main() 
{ 
  
    int t;
    cin>>t;
    while(t--)
    {
        Graph g;
    // add edges 
        g.addEdge(3, 4); 
        g.addEdge(3, 5); 
        g.addEdge(3, 1); 
        g.addEdge(3, 2); 
        g.addEdge(4, 2); 
        
        ll color[N]; 
        ll par[N]; 
      
        // mark with unique numbers 
        ll mark[N]; 
      
        // store the numbers of cycle 
        ll cyclenumber = 0; 
        ll edges = 5; 
      
        // call DFS to mark the cycles 
        g.dfs_cycle(1, 0, color, mark, par, cyclenumber); 
      
        // function to print the cycles 
        if(g.printCycles(edges, mark, cyclenumber)) {
            cout << "Articulation";
        }
    }
     
} 