#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int INF = 1e9+7;
int n,m;
int graph[N][N];
int isvisited[N][N];
int level[N][N];
bool isvalid(int x,int y){
	return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>> movements = {
	{0,-1},{1,0},{0,1},{-1,0}
	,{-1,-1},{1,-1},{-1,1},{1,1}
};
void reset(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			isvisited[i][j] = 0;
			level[i][j] = INF;
		}
	}
}
int bfs(){

	queue<pair<int,int>> q;
	int mx = graph[0][0];
	// cout<<n<<m<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			mx = max(mx,graph[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(graph[i][j] == mx){  
				q.push({i,j});
				isvisited[i][j] = 1;
				level[i][j] = 0;
			}
		}
	}
	
	int ans = 0;
	while(!q.empty()){
		auto curr = q.front();
		q.pop();
		int x = curr.first;
		int y = curr.second;
		for(auto movement:movements){
			int child_x = x + movement.first;
			int child_y = y+ movement.second;
			if(!isvalid(child_x,child_y))	continue;
			if(isvisited[child_x][child_y])		continue;
			q.push({child_x,child_y});
			level[child_x][child_y] = level[x][y] + 1;
			isvisited[child_x][child_y] = 1;
			ans = max(ans , level[child_x][child_y]);
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		reset();
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>graph[i][j];
			}
		}

		cout<<bfs()<<endl;
	}
	return 0;
}

