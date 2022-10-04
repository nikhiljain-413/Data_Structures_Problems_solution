// C++ code for printing Minimum Cost
// Simple Path between two given nodes
// in a directed and weighted graph
#include <bits/stdc++.h>
using namespace std;

// Define number of vertices in
// the graph and infinite value
const int V=4;
#define INF INT_MAX

// Function to do DFS through the nodes
int minimumCostSimplePath(int u, int destination,
					bool visited[], int graph[][V])
{

	// check if we find the destination
	// then further cost will be 0
	if (u == destination)
		return 0;

	// marking the current node as visited
	visited[u] = 1;

	int ans = INF;

	// traverse through all
	// the adjacent nodes
	for (int i = 0; i < V; i++) {
		if (graph[u][i] != INF && !visited[i]) {

			// cost of the further path
			int curr = minimumCostSimplePath(i,
						destination, visited, graph);

			// check if we have reached the destination
			if (curr < INF) {

				// Taking the minimum cost path
				ans = min(ans, graph[u][i] + curr);
			}
		}
	}

	// unmarking the current node
	// to make it available for other
	// simple paths
	visited[u] = 0;

	// returning the minimum cost
	return ans;
}

// driver code
int main()
{

	// initialising the graph
	int graph[V][V];
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			graph[i][j] = INF;
		}
	}
	int i=0;
	map<int,int> m;
	for(int j=0;j<V;j++){
		int a;
		cin>>a;
		m[a] = i;
		i++;
	}
	// marking all nodes as unvisited
	bool visited[V] = { 0 };

	// initialising the edges;
	// graph[0][3] = 2;
	// graph[2][0] = 3;
	// graph[2][3] = 7;
	// graph[3][1] = 1;
	
	int p;
	cin>>p;
	for(int j=0;j<p;j++){
		int a,b,c;
		cin>>a>>b>>c;

		graph[m[a]][m[b]] = c;
		
	}
	// source and destination
	int num1,num2;
	cin>>num1>>num2;

	int s = m[num1], t = m[num2];

	// marking the source as visited
	visited[s] = 1;

	cout << minimumCostSimplePath(s, t,
							visited, graph);

	return 0;
}
