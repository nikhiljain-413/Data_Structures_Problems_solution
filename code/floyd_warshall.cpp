#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int INF =1e9+7;
vector<pair<int,int>> graph[N];
int dist[N][N];

int main(){

	int n,e;
	cin>>n>>e;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				dist[i][j] = 0;
			}
			else{
				dist[i][j] = INF;
			}
		}
	}
	while(e--){
		int n1,n2,w;
		cin>>n1>>n2>>w;
		graph[n1].push_back({n2,w});
		dist[n1-1][n2-1] = w;
	}
	
	
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(dist[i][k]!= INF && dist[k][j]!=INF){
					dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(dist[i][j] == INF){
				cout<<"I"<<" ";
			}else
				cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

