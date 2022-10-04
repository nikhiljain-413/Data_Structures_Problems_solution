#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int, multiset<string>> mp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string name;
		int marks;
		cin>>name>>marks;
		mp[marks].insert(name);
	}

	// for(auto it = --mp.end();it!=mp.begin();it--){
	// 	auto &students = (*it).second;
	// 	int marks = (*it).first;
	// 	for(string student : students){
	// 		cout<<student <<" "<<marks<<endl;
	// 	}
	// }
	// auto it = mp.begin();
	// auto &students = (*it).second;
	// int marks = (*it).first;
	// for(string student : students){
	// 	cout<<student <<" "<<marks<<endl;
	// }
	auto it = --mp.end();
	while(true){
		auto &students = (*it).second;
		int marks = (*it).first;
		for(string student : students){
			cout<<student <<" "<<marks<<endl;
		}

		if(it == mp.begin())  break;
		it--;
	}
	return 0;
}