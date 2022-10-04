#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
vector<int> graph[N];
vector<int> visited(N);

vector<vector<int>> conn_comp;
vector<int> current_conn_comp;

void dfs(int node){
	visited[node] = 1;
	current_conn_comp.push_back(node);

	for(auto child:graph[node]){
		if (visited[child] == 1) continue;
		dfs(child);
	}
}

bool find_loop(int node,int parent){
	visited[node] = 1;
	current_conn_comp.push_back(node);
	bool loop_exist = false;
	for(auto child:graph[node]){
		if (visited[child] == 1 && child == parent) continue;
		if (visited[child] == 1){


			return true;
			// loop_exist = true;
		}
		loop_exist |= find_loop(child,node);
	}
	return loop_exist;
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
	int connected_component = 0;
	int isloopexist =0;
	for(int i=1;i<=vertex;i++){
		if(visited[i]!=1){
			current_conn_comp.clear();
			if(find_loop(i,0)){
				isloopexist = 1;
				break;
			}
			conn_comp.push_back(current_conn_comp);
			connected_component++;
		}
	}
	cout<<isloopexist<<endl;
	// cout<<connected_component<<endl;
	// cout<<conn_comp.size()<<endl;
	// for(auto cc: conn_comp){
	// 	for(auto value:cc){
	// 		cout<<value<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}