#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(vector<int> v){
	vector<vector<int>> subsets;
	int n = v.size();
	int subset_cnt = (1<<n);
	for(int mask=0; mask<subset_cnt; mask++){
		vector<int> subset;
		for(int i=0; i<n; i++){
			if((mask & (1<<i)) != 0){
				subset.push_back(v[i]);
			}
		}
		subsets.push_back(subset);
	}
	
	return subsets;
}
int main(){
	vector<int> v = {1,2,3};
	auto subsets = generate(v);
	for(auto vec : subsets){
		for(auto val : vec){
			cout<<val<<" ";
		}
		cout<<endl;
	}

	return 0;
}