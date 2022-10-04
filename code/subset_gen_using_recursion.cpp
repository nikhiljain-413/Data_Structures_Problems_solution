#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> all_subset;
vector<int> sub;
void subset(vector<int> v,vector<int> sub){
	if(v.size()==0){
		all_subset.push_back(sub);
		return;
	}
	int elm =v[v.size()-1];
	v.pop_back();
	sub.push_back(elm);
	subset(v,sub);
	sub.pop_back();
	subset(v,sub);

}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	subset(v,sub);

	for(auto vec:all_subset){
		for(auto value:vec){
			cout<<value<<" ";
		}
		cout<<endl;
	}
	return 0;
}