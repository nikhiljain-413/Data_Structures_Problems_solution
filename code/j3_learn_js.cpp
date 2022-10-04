#include <bits/stdc++.h>
using namespace std;
map<long long int,multiset<long long int>> m;
set<int> s;
void subsetgenerate(long long int num1){
	if(m.find(num1) == m.end()){
		return ;
	}
	s.insert(num1);
	for(auto value:m[num1]){
		if (s.find(value)!=s.end()) continue;
		s.insert(value);
		
		subsetgenerate(value);
		
	}
	
}
int main() {
	long long int num;
	cin>>num;
	long long int a[num];
	for(long long int i=0;i<num;i++){
		cin>>a[i];
	}
	long long int p;
	cin>>p;
	while(p--){
		long long int a,b;
		cin>>a>>b;
		m[a].insert(b);

	}
	// for(auto value:m){
	// 	cout<<value.first;
	// 	for(auto val:value.second){
	// 		cout<<val<<" ";
	// 	}
	// 	cout<<endl;
	// }
	long long int num1,num2;
	cin>>num1>>num2;
	// cout<<ispossible(num1,num2);
	// for(auto value:s){
	// 	cout<<value<<" ";
	// }
	map<int,set<int>> m;
	for(int i=0;i<num;i++){
		s.clear();
		subsetgenerate(a[i]);
		s.erase(a[i]);
		m[a[i]] = s;

	}
	for(auto value:m[num1]){
		if(value == num2){
			cout<<num1<<" ";
		}else{
			// for( auto fi: m[val]){
			// 	if(fi == num2){
			// 		cout<<value<<" "
			// 	}
			// }
			if(m[value].find(num2)!=m[value].end()){
				cout<<value<<" ";
			}
		}
	}
}