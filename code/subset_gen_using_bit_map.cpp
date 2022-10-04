#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i= 0;i<n;i++){
			cin>>v[i];
		}
		

		vector<vector<int>> subset;
		vector<int> create_vector;
		int total  =pow(2,n);
		for(int i=0;i<total;i++){
			create_vector.clear();
			for(int j=0;j<n;j++){
				if(i & (1<<j)){
					create_vector.push_back(v[j]);
				}
			}
			subset.push_back(create_vector);
		}

		for(auto vec:subset){
			for(auto val: vec){
				cout<<val<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}