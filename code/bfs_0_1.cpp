#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+7;
vector<pair<int,int>> graph[N];
vector<int> level(N,INF);

int bfs(int start,int end){
	deque<int> q;
	q.push_back(start);
	level[1] = 0;
	while(!q.empty()){
		int curr_v = q.front();
		q.pop_front();
		for(auto child:graph[curr_v]){
			int ver = child.first;
			int wt = child.second;
			if(level[curr_v] + wt<level[ver]){
				level[ver] = level[curr_v] + wt;
				if(wt==1){
					q.push_back(ver);
				} else{
					q.push_front(ver);
				}
			}
		}
	}
	return level[end];
}

int main(){
	int n,e;
	cin>>n>>e;
	while(e--){
		int n1,n2;
		cin>>n1>>n2;
		graph[n1].push_back({n2,0});
		graph[n2].push_back({n1,1});
	}
	cout<<bfs(1,7);
	return 0;
}

