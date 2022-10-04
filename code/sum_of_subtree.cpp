#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> tree[N];
int sum[N];
int even_cnt[N];

void dfs(int vertex, int parent =0){

	sum[vertex] = vertex;
	if((vertex & 1) ==0)	even_cnt[vertex] = 1;
	for(auto child:tree[vertex]){
		if(child == parent)	continue;
		dfs(child,vertex);
		sum [vertex] += sum[child];
		even_cnt[vertex] += even_cnt[child];
	}
}
int main(){
	int node;cin>>node;
	for(int i=0;i<node-1;i++){
		int a,b;
		cin>>a>>b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(1);
	for(int i=1;i<=node;i++){
		cout<<sum[i]<<" "<<even_cnt[i]<<endl;
	}
	return 0;
}