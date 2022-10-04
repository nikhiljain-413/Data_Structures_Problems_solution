#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> tree[N];
int height[N];
int depth[N];

void dfs(int vertex,int parent = 0){

	for(auto child: tree[vertex]){
		if(child==parent)	continue;
		depth[child] = depth[vertex] + 1;
		dfs(child,vertex);
		height[vertex] = max(height[vertex],height[child] +1);
	}
}
int main(){
	// cout<<"hello";
	int node;cin>>node;
	for(int i =0;i<node-1;i++){
		int a,b;
		cin>>a>>b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(1);
	for(int i=1;i<=node;i++){
		cout<<depth[i]<<" "<<height[i]<<endl;
	}
	return 0;
}