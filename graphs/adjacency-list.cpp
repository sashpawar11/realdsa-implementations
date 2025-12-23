#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {

     // Adjacency List Representation for Graphs
     // Purpose : Store neighbours of each node at the specific index of the adj list

     int n,m;
     cin >> n >> m;

     vector<int> adjlist[n+1];   // for 1-based indexed graph. For 0-based indexed graph, use adjlist[n]

     for(int i =0; i<m; i++){

         int u , v;

         cin >> u >> v;

         // Store neigbhous at indexes of adj list; where index acts as the actual Node
         adjlist[u].push_back(v);
         adjlist[v].push_back(u);         // since every edge is bidirectional in undirected graph.
         // for directed graph, we would not have line 23, as edge between u-v is the only edge.
     }

  return 0;
}


// for Weighted Graphs
int weightedGraphsAdjList() {

  // Adjacency List Representation for Weighted Graphs
  int n,m;              // Inputs : n = no. nodes, m = no. edges
  cin >> n >> m;

  vector<pair<int,int>> adjlist[n+1];        // for 1-based indexed graph. For 0-based indexed graph, use adjlist[n]

  for(int i = 0; i<m; i++){
        int u, v, w;          // edge between node u and v will be provided on each line in the edges matrix; w = weight of edge
        cin >> u >> v >> w;

        pair<int,int> node1 = {v,w};
        pair<int,int> node2 = {u,w};

        // Store neigbhous at indexes of adj list; where index has the pairs of (neighbour node, weight of edge) items
        adjlist[u].push_back(node1);
        adjlist[v].push_back(node2);

        // for directed graph, we would not have line 50, as edge between u-v is the only edge.
  }


  return 0;
}
