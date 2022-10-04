#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {1,2,3,4,5,6};
	vector<int> :: iterator it1 = v.begin();
	for( ; it1!=v.end() ; it1++){
		cout<<*it1<<" ";
	}
	cout<<endl;
	for(int value:v){
		cout<<value<<" ";
	}
	cout<<endl;


	vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6},{7,8},{8,9}};
	
	for(auto it = v_p.begin(); it!=v_p.end() ;it++ ){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<endl;
	for(auto it = v_p.begin(); it!=v_p.end() ;it++ ){
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<endl;
	for(pair<int,int> p: v_p){
		cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}