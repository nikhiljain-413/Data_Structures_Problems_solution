#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> all_subset;

void make_subset(vector<int> &v,int i,vector<int> &subset){
	if(i==v.size()){
		all_subset.push_back(subset);
		return;
	}
	make_subset(v,i+1,subset);

	subset.push_back(v[i]);
	make_subset(v,i+1,subset);
	subset.pop_back();
}


int main(){
	vector<int> v = {1,2,3};
	vector<int> newv;
	make_subset(v,0,newv);
	for(auto subset:all_subset){
		
		for(auto sub:subset){
			cout<<sub<<" ";
		}
		cout<<endl;
	}
	return 0;
}