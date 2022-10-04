#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int visited[N];
vector<int> bfs_traversal;
int level[N];
vector<int> graph[N];
void bfs(int vertex){
	queue<int> q;
	q.push(vertex);
	visited[vertex] =1;
	while(q.size()){
		int current_node = q.front();
		// cout<<current_node<<" ";
		bfs_traversal.push_back(current_node);
		q.pop();
		for(auto child:graph[current_node]){
			if(visited[child]!=1){
				q.push(child);
				visited[child] = 1;
				level[child] = level[current_node] +1;
			}
			
		}
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
	bfs(1);
	for(int i=1;i<=node;i++){
		int vertex = bfs_traversal[i-1];
		cout<<vertex<<" "<<level[vertex]<<endl;
	}
	return 0;
}