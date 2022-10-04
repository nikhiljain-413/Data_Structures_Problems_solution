#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(vector<int> v){
	int n = v.size();
	vector<vector<int>> all_subset;
	int bitmask_count = (1<<n);
	for(int mask=0; mask<bitmask_count; mask++){
		vector<int> subset;
		for(int i=0;i<n;i++){
			if((mask & (1<<i))!=0){
				subset.push_back(v[i]);
			}
		}
		all_subset.push_back(subset);
	}
	
	return all_subset;
}
int main(){
	vector<int> v = {3,4,5};
	auto all_subset = generate(v);
	for(auto subset:all_subset){
		for(auto value:subset){
			cout<<value<<" ";
		}
		cout<<endl;
	}
	return 0;
}