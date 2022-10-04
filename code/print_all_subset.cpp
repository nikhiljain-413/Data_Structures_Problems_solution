#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> all_subset; 
void generate(vector<int> v, vector<int> new_v){
	if(v.size()==0){
		all_subset.push_back(new_v);
		return;
	}
	int value = v[v.size()-1];
	v.pop_back();
	new_v.push_back(value);
	generate(v,new_v);
	new_v.pop_back();
	generate(v,new_v);
	
	

}
int main(){
	vector<int> new_v;
	vector<int> v = {1,2,3};
	generate(v,new_v);
	for(auto vec:all_subset){
		for(auto value:vec){
			cout<<value<<" ";
		}cout<<endl;
	}
	return 0;
}