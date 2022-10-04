#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> parent(N);
vector<int> sizee(N);
multiset<int> sizes;
void make(int v){
	parent[v] = v;
	sizee[v] = 1;
	sizes.insert(sizee[v]);
}
int find(int v){
	if(v==parent[v]) return v;
	return parent[v] = find(parent[v]);
}
void merge(int a,int b){
	sizes.erase(sizes.find(sizee[a]));
	sizes.erase(sizes.find(sizee[b]));
	sizes.insert(sizee[a]+sizee[b]);
}
void Union(int a,int b){
	a = find(a);
	b = find(b);
	if(a!=b){
		if(sizee[a]<sizee[b]){
			swap(a,b);
		}
	}
	
	parent[b] = a;
	merge(a,b);
	sizee[a]+=sizee[b];
}
int main(){
	int n,e;
	cin>>n>>e;
	for(int i=1;i<=n;i++){
		make(i);
	}
	while(e--){
		int n1,n2;
		cin>>n1>>n2;
		Union(n1,n2);
		if(sizes.size()==1){
			cout<<0<<endl;
		}
		else{
			int min = *(sizes.begin());
			int max = *(--sizes.end());
			cout<<max-min<<endl;
		}
	}
	// int connected_comp = 0;
	// for(int i=1;i<=n;i++){
	// 	if(parent[i]==i){
	// 		connected_comp++;
	// 	}
	// }
	// cout<<connected_comp<<endl;

	return 0;
}

