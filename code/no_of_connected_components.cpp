#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
vector<int> visited(N);

bool dfs(int vertex, int par){
	visited[vertex] = 1;
	bool isloopexist = false;
	for(auto child:graph[vertex]){
		if(visited[child] && child == par)	continue;
		if(visited[child]) 	return true;
		isloopexist|= dfs(child,vertex);
	}
	return isloopexist;
}
int main(){
	int n,e;
	cin>>n>>e;
	while(e--){
		int v1,v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	int cnt =0;
	bool isloop = false;
	for(int i=1;i<=n;i++){
		if(visited[i])	 continue;

		isloop |= dfs(i,0);
		cnt++;
	}
	cout<<cnt<<endl;
	cout<<isloop<<endl;

	return 0;
}

