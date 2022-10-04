//implemented using red black trees
//insertion time complexity = o(log n)
//excess time complexity = o(log n)

#include<bits/stdc++.h>
using namespace std;

void printmap(map<int , string> &mp){
	cout<<"size is: "<<mp.size()<<endl;
	for(auto &p:mp){
		cout<<p.first<<" "<<p.second<<endl;
	}
}

int main(){
	// map<int,string> m;
	// m[0] = "nikhil";
	// m[1] = "vandana";
	// m[2] = "pawan";
	// m.insert({3, "gudiya"});
	// printmap(m);
	// cout<<endl;
	// auto it = m.find(2);
	// if(it == m.end()){
	// 	cout<<"NO VALUE FOUND";
	// }else{
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }
	// m.erase(3);
	// printmap(m);
	// cout<<endl;
	// m.erase(it);
	// printmap(m);
	// cout<<endl;

	unordered_map<string, int> ump;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		ump[s]++;
	}

	for(auto it = ump.begin(); it!=ump.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}

	cout<<endl;
	auto it = ump.find("def");
	cout<<it->first<<" "<<it->second<<endl;
	ump.erase(it);
	ump.erase("abc");
	cout<<endl;
	for(auto it = ump.begin(); it!=ump.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}

	multimap<string, int> mmp;
	
	return 0;
}