#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF = 1e9+10;
vector<pair<int,int>> graph[N];
vector<int> level(N,INF);

int bfs(int vertex){
	deque<int> q;
	q.push_back(1);
	level[1] = 0;
	while(!q.empty()){
		int curr_v = q.front();
		q.pop_front();
		for(auto child: graph[curr_v]){
			int child_v = child.first;
			int wt = child.second;
			if(level[curr_v] + wt < level[child_v]){
				level[child_v] = level[curr_v] + wt;
				if(wt==1){
					q.push_back(child_v);
				}else{
					q.push_front(child_v);
				}
			}
		}
	}
	return ((level[vertex] == INF)? -1: level[vertex]);
}
int main(){
	int nodes,q;
	cin>>nodes>>q;
	for(int i=1;i<=q;i++){
		int x,y;
		cin>>x>>y;
		if x==y  continue;
		graph[x].push_back({y,0});
		graph[y].push_back({x,1});
	}
	cout<<bfs(7);
	return 0;
}


// input -->
// 7 7
// 1 2
// 3 2
// 3 4
// 7 4
// 6 2
// 5 6
// 7 5

// output -->
// 2