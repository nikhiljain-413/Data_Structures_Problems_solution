#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int> graph[N];
int depth[N];

void dfs(int vertex,int parent =0){

	for(auto child: graph[vertex]){
		if(child == parent)		continue;
		depth[child] = depth[vertex] +1;
		dfs(child,vertex);
	}
}
int main(){
	int node;cin>>node;
	for(int i=0;i<node-1;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);
	int max_depth = 0;
	int max_depth_node;
	for(int i=1;i<=node;i++){
		if(max_depth < depth[i]){
			max_depth = depth[i];
			max_depth_node = i;
		}
		depth[i]=0;

	}
	// cout<<max_depth<<" "<<max_depth_node<<endl;
	max_depth = 0;
	dfs(max_depth_node);
	for(int i=1;i<=node;i++){
		if(max_depth <depth[i]){
			max_depth = depth[i];
		}
	}

	cout<<max_depth<<endl;
	return 0;
}