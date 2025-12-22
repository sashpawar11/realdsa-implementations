#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {

     // Adjacency List Representation for Undirected Graph
     // Purpose : Store neighbours of each node at the specific index of the adj list

     int n,m;
     cin >> n >> m;

     vector<int> adjlist[n+1];   // for 1-based indexed graph. For 0-based indexed graph, use adjlist[n]

     for(int i =0; i<m; i++){

         int u , v;

         cin >> u >> v;

         // Underiected Graph : Store neigbhous at indexes of adj list; where index acts as the actual Node
         adjlist[u].push_back(v);
         adjlist[v].push_back(u);         // since every edge is bidirectional.
     }

  return 0;
}
