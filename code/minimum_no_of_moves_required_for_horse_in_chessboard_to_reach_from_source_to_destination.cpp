#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF =1e9+10;

int visited[8][8];
int level[8][8];
int get_x(string s){
	return s[0] - 'a';
}
int get_y(string s){
	return s[1] - '1';
}
bool is_valid_position(int x,int y){
	return x>=0 && x<8 && y>=0 && y<8;
}
vector<pair<int,int>> movements = {
	{-1,2},{1,2},
	{-2,1},{2,1},
	{-2,-1},{2,-1},
	{-1,-2},{1,-2}
};
int moves(string source,string dest){
	int source_x = get_x(source);
	int source_y = get_y(source);
	int dest_x = get_x(dest);
	int dest_y = get_y(dest);
	visited[source_x][source_y] = 1;
	level[source_x][source_y] = 0;
	queue<pair<int,int>> q;
	q.push({source_x,source_y});
	while(!q.empty()){
		auto pr = q.front();
		int current_x = pr.first;
		int current_y = pr.second;
		q.pop();
		for(auto pa_r: movements){
			int x = current_x + pa_r.first;
			int y = current_y + pa_r.second;
			if(!is_valid_position(x,y))		continue;
			if(visited[x][y] == 1)	continue;
			q.push({x,y});
			visited[x][y] = 1;
			level[x][y] = level[current_x][current_y] + 1; 
		}  
		if(level[dest_x][dest_y]!=INF){
			break;
		}
	}
	return level[dest_x][dest_y];

}
void reset(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			level[i][j] = INF;
			visited[i][j] = 0;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		reset();
		string source,dest;
		cin>>source>>dest;
		cout<<moves(source,dest)<<endl;
	}
	return 0;
}


// input:
// 3
// a1 h8
// a1 c2
// h8 c3

// output:
// 6
// 1
// 4