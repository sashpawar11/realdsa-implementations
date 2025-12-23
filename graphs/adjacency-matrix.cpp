#include <iostream>

using namespace std;
int main() {

  // Adjacency Matrix Representation for Graphs
  int n,m;              // Inputs : n = no. nodes, m = no. edges
  cin >> n >> m;

  int adj[n+1][m+1];        // if 1-based indexing graph.   -> if 0-based indexing graph, take n X m : i.e. adj[n][m]

  for(int i = 0; i<m; i++){
        int u, v;          // edge between node u and v will be provided on each line in the edges matrix
        cin >> u >> v;

        // for undirected graph --> mark edge and opposite edge (bi-directional) as 1
        adj[u][v] = 1;
        adj[v][u] = 1;
        // for directed graph, we would not have line 18, as edge between u-v is the only edge.
  }


  return 0;
}
