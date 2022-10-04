#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> all_subset;
vector<int> sub;
void subset(vector<int> v,int i,vector<int> sub){
	if(i == v.size()){
		all_subset.push_back(sub);
		return ;
	}
	int elm =v[i];
	subset(v,i+1,sub);
	sub.push_back(elm);
	subset(v,i+1,sub);
	sub.pop_back();

}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	subset(v,0,sub);

	for(auto vec:all_subset){
		for(auto value:vec){
			cout<<value<<" ";
		}
		cout<<endl;
	}
	return 0;
}