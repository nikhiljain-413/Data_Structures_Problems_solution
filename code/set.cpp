//implemented using red black trees
//insertion time complexity in o(log n)
//excess timr complexity is o(log n)
#include<bits/stdc++.h>
using namespace std;

void printset(auto &s){
	cout<<"Size is: "<<s.size()<<endl;
	for(auto value:s){
		cout<<value<<" ";
	}
	cout<<endl;
}

int main(){
	// set<string> s;   		    //o(log n)
	// unordered_set<string> s;     //o(1)
	multiset<string> s;       		//o(log n)
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		s.insert(str);
	}

	s.erase("abc");
	auto it = s.find("ghj");
	if(it!= s.end()) s.erase(it);
	printset(s);
	return 0;
}