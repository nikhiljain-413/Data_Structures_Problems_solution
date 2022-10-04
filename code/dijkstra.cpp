#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF = 1e9+7;
vector<pair<int,int> > graph[N];
vector<int> visited(N,0);
vector<int> dist(N,INF);
void dijkistra(int source){
	set<pair<int,int>> s;
	s.insert({0,source});

	dist[source] = 0;


	while(s.size()>0){
		auto curr = *s.begin();
		s.erase(s.begin());
		int wt = curr.first;
		int curr_v = curr.second;
		if(visited[curr_v]) continue;
		visited[curr_v] = 1;

		for(auto child:graph[curr_v]){
			int v = child.first;
			int w = child.second;
			if(dist[curr_v] + w <dist[v]){
				dist[v] = dist[curr_v] + w;

				s.insert({dist[v],v});
			}
		}
	}

}
int main(){
	int n,e;
	cin>>n>>e;
	while(e--){
		int n1,n2,weight;
		cin>>n1>>n2>>weight;
		graph[n1].push_back({n2,weight});
	}
	// for(int i=1;i<=6;i++){
	// 	auto g = graph[i];
	// 	for(auto p:g){
	// 		cout<<i<<" "<<p.first<<" "<<p.second<<endl;
	// 	}
	// }
	dijkistra(1);
	for(int i=1;i<=6;i++){
		cout<<i <<" "<<dist[i]<<endl;
	}
	return 0;
}

