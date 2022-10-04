#include<bits/stdc++.h>
using namespace std;

void printmap(auto &m){
	cout<<"Size is: "<<m.size()<<endl;
	for(auto it = m.begin(); it!=m.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
}
int main(){
	map<string,int> m;
	int n;
	cin>>n;

	for(int i=0; i<n;i++){
		string s;
		cin>>s;
		m[s]++;
	}
	printmap(m);
	return 0;
}