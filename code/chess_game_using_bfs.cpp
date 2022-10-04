#include<bits/stdc++.h>
using namespace std;
const int INF=1e9+7;
int level[8][8];
int visited[8][8];
vector<pair<int,int>> movments = {
	{-1,-2},{1,-2},
	{-1,2},{1,2},
	{-2,-1},{2,-1},
	{-2,1},{2,1}
};
bool isvalid(int x,int y){
	return x>=0 && y>=0 && x<8 && y<8;
}
int get_x(string s){
	return (s[0] - 'a');
}
int get_y(string s){
	return (s[1] - '1');
}
int bfs(string start,string end){
	int start_x = get_x(start);
	int start_y = get_y(start);
	int end_x = get_x(end);
	int end_y = get_y(end);
	queue<pair<int,int>> q;
	q.push({start_x,start_y});
	visited[start_x][start_y] = 1;
	level[start_x][start_y] = 0;
	while(!q.empty()){
		auto curr = q.front();
		q.pop();
		int x = curr.first;
		int y = curr.second;
		for(auto pos:movments){
			int new_x = x + pos.first;
			int new_y = y+pos.second;
			if(!isvalid(new_x,new_y)) 	continue;
			if(!visited[new_x][new_y]){
				q.push({new_x,new_y});
				visited[new_x][new_y] = 1;
				level[new_x][new_y] = level[x][y]+1;
			}
		}
	}
	return level[end_x][end_y];
}

void reset(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			level[i][j] = 0;
			visited[i][j] = 0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string start,end;
		cin>>start>>end;
		reset();
		
		cout<<bfs(start,end)<<endl;
		// cout<<level[get_x(end)][get_y(end)];
	}
	return 0;
}

