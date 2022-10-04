#include <bits/stdc++.h>
using namespace std;
set<int> s;
map<long long int,set<long long int>> m;

int ispossible(long long int n1,long long int n2){
	if(m.find(n1) == m.end()){
		return 0;
	}
	s.insert(n1);
	for(auto value:m[n1]){
		if (s.find(value)!=s.end()) continue;
		s.insert(value);
		
		ispossible(value,n2);
		
	}
	if(s.find(n2)!=s.end()){
		return 1;
	}
	else return 0;
}
int main() {
	long long int num;
	cin>>num;
	long long int a[num];
	for(long long int j=0;j<num;j++){
		cin>>a[j];
	}
	long long int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long int x,y;
		cin>>x>>y;
		m[x].insert(y);

	}
	
	long long int n1,n2;
	cin>>n1>>n2;
	cout<<ispossible(n1,n2);
	
}