#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> graph[N];
int parent[N];

vector<int> path(int vertex){
	vector<int> parents;
	while(vertex!=-1){
		parents.push_back(vertex);
		vertex = parent[vertex];
	}
	reverse(parents.begin(), parents.end());
	return parents;
}
void dfs(int vertex,int par_ent = -1){
	parent[vertex] = par_ent;
	for(auto  child: graph[vertex]){
		if(child == par_ent)		continue;
		// parent[child] = vertex;
		dfs(child,vertex);
	}
}
int main(){
	int node;
	cin>>node;
	for(int i=0;i<node-1;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1);
	// for(int i=1;i<=node;i++){
	// 	cout<<parent[i]<<endl;
	// }

	vector<int> path1 = path(7);
	vector<int> path2 = path(2);
	int lca = -1;
	int path_len = min(path1.size(),path2.size());
	for(int i=0;i<path_len;i++){
		if(path1[i] == path2[i]){
			lca = path1[i];
		}
		else	break;
	}
	cout<<lca<<endl;
	return 0;
}  