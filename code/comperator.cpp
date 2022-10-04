#include<bits/stdc++.h>
using namespace std;

bool is_compare_to(auto v1, auto v2){
	if(v1.first!=v2.first){
		if(v1.first>v2.first) return true;
		else return false;
	}else{
		if(v1.first<v2.first) return true;
		else return false; 
	}
}

bool cmp(pair<int,int> v1, pair<int,int>v2){
	if(v1.first!=v2.first){
		if(v1.first>v2.first) return false;
		else return true;
	}else{
		if(v1.second<v2.second) return false;
		else return true; 
	}
}

bool cmp1(pair<int,int> v1, pair<int,int>v2){
	if(v1.first!=v2.first){
		return v1.first<v2.first;
	}else{
		return v1.second>v2.second;
	}
}

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	// for(int i=0;i<n-1;i++){
	// 	for(int j=0;j<n-1-i;j++){
	// 		if(is_compare_to(v[j],v[j+1])){
	// 			swap(v[j],v[j+1]);
	// 		}
	// 	}
	// }
	sort(v.begin(),v.end(),cmp1);
	for(auto pr:v){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	return 0;
}