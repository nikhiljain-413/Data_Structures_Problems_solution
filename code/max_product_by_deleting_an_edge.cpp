#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;
const int N=1e5+10;
vector<int> graph[N];
int weight[N];
int sum[N];

void dfs(int vertex,int parent=-1){
	sum[vertex] = weight[vertex];
	for(auto child:graph[vertex]){
		if(child == parent)		continue;
		dfs(child,vertex);
		sum[vertex] += sum[child];
	}
}

int main(){
	int node;cin>>node;
	for(int i=1;i<=node;i++){
		cin>>weight[i];
	}
	for(int i=0;i<node-1;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	// for(auto value: sum){
	// 	cout<<value<<" ";
	// }
	dfs(1);
	long long product = 0;
	for(int i=2;i<=node;i++){
		int part1 = sum[i];
		int part2 = sum[1] - part1;
		product = max(product, (part1* 1ll* part2)%M);
	}

	cout<<product<<endl;
	return 0;
}