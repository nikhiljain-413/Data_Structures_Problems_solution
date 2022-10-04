#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
vector<int> graph[N];
vector<int> visited(N);
void dfs(int node){
	visited[node] = 1;
	cout<<node<<" ";
	for(auto child:graph[node]){
		if (visited[child] == 1) continue;
		dfs(child);
	}
}
int main(){
	int vertex,edge;
	cin>>vertex>>edge;
	while(edge--){
		int n,m;
		cin>>n>>m;
		graph[n].push_back(m);
		graph[m].push_back(n);
	}
	dfs(1);


	return 0;
}