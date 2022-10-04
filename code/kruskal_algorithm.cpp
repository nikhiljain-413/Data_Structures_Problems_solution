#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> parent(N);
vector<int> sizee(N);
void make(int v){
	parent[v] =v;
	sizee[v] = 1;
}

int find(int v){
	if(v==parent[v])	return v;
	return parent[v] = find(parent[v]);
}

void Union(int a,int b){
	a = find(a);
	b= find(b);
	if(a!=b){
		if(sizee[a]<sizee[b]){
			swap(a,b);
		}
		parent[b] = a;
		sizee[a] += sizee[b];
	}

}
int main(){
	int n,e;
	cin>>n>>e;
	for(int i=1;i<=n;i++){
		make(i);
	}
	vector<pair<int,pair<int,int>>> edge;
	while(e--){
		int n1,n2,wt;
		cin>>n1>>n2>>wt;
		edge.push_back({wt,{n1,n2}});
	}
	sort(edge.begin(), edge.end());
	int total = 0;
	for(auto &edg:edge){
		int weight = edg.first;
		int node1 = edg.second.first;
		int node2 = edg.second.second;
		if(find(node1)==find(node2))	continue;
		Union(node1,node2);
		cout<<node1<<" "<<node2<<endl;
		total+=weight;
	}
	cout<<total<<endl;
	return 0;
}




// input:-
// 6 9
// 5 4 9
// 1 4 1
// 5 1 4
// 4 3 5
// 4 2 3
// 1 2 2
// 3 2 3
// 3 6 8
// 2 6 7

// output:-
// 1 4
// 1 2
// 3 2
// 5 1
// 2 6
// 17
