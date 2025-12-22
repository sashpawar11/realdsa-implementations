#include <iostream>

using namespace std;
int main() {

  // Adjacency Matrix Representation for Undirected Graph
  int n,m;              // Inputs : n = no. nodes, m = no. edges
  cin >> n >> m;

  int adj[n+1][m+1];        // if 1-based graph.   -> if 0-based graph, take n X m

  for(int i = 0; i<m; i++){
        int u, v;          // edge between node u and v will be provided on each line in the edges matrix
        cin >> u >> v;

        // undirected graph --> mark edge and opposite edge (bi-directional) as 1
        adj[u][v] = 1;
        adj[v][u] = 1;
  }


  return 0;
}
