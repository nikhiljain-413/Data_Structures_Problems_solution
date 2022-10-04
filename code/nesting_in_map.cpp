#include<bits/stdc++.h>
using namespace std;
int main(){
	map<pair<string, string> , vector<int>> m;

	int t;
	cin>>t;
	while(t--){
		string fn,ln;
		int size;
		cin>>fn>>ln>>size;
		for(int i=0;i<size;i++){
			int no;
			cin>>no;
			m[{fn,ln}].push_back(no);
		}
	}

	for(auto &pr:m){
		auto &fullname = pr.first;
		auto &list = pr.second;
		cout<<fullname.first<<" "<<fullname.second<<" "<<list.size()<<endl;
		for(auto value:list){
			cout<<value<<" ";
		}
		cout<<endl;
	}
	return 0;
}