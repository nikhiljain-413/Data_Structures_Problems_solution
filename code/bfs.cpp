#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
vector<int> visited(N);
vector<int> depth(N);
vector<int> parent(N);

void bfs(int vertex){
	queue <int> q;
	visited[vertex]  =1;
	q.push(vertex);
	q.push(' ');
	while(!q.empty()){
		if(q.front() == ' '){
			cout<<endl;
			q.pop();
			q.push(' ');
			if(q.size()==1){
				break;
			}
		}
		int curent_ver = q.front();
		cout<<curent_ver<<" ";
		q.pop();
		for(auto child:graph[curent_ver]){
			if(!visited[child]){
				visited[child] = 1;
				depth[child] = depth[curent_ver] +1;
				parent[child] = curent_ver;
				q.push(child);
			}
		}
		
	}
	cout<<endl;

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
	bfs(1);
	for(int i=1;i<=13;i++){
		cout<<i<<" "<<depth[i]<<" "<<parent[i]<<endl;
	}
	return 0;
}

