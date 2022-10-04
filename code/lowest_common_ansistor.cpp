#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
vector<int> par(N);
void dfs(int vertex, int parent =-1){
	par[vertex] = parent;
	for(auto child:graph[vertex]){
		if (child == parent)	continue;
		dfs(child,vertex);
	}
}
vector<int> path(int vertex){
	vector<int> pat;
	while(vertex!=-1){
		pat.push_back(vertex);
		vertex = par[vertex];
	}
	reverse(pat.begin(),pat.end());
	return pat;
}
int main(){
	int n,e;
	cin>>n>>e;
	while(e--){
		int n1,n2;
		cin>>n1>>n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);

	}
	
	dfs(1);
	
	int n1,n2;
	cin>>n1>>n2;
	vector<int> path1 = path(n1);
	vector<int> path2 = path(n2);
	int path_len = min(path1.size(),path2.size());
	int common_ansistor = -1;
	for(int i=0;i<path_len;i++){
		if(path1[i] == path2[i]){
			common_ansistor = path1[i];
		}else{
			break;
		}
	}
	cout<<common_ansistor<<endl;
	return 0;
}

