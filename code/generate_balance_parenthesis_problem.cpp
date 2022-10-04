#include<bits/stdc++.h>
using namespace std;
vector<string> valid_sequence;
void generate_string(string &s, int open, int close){
	if(open==0 && close ==0){
		valid_sequence.push_back(s);
		return;
	}

	if(open>0){
		s.push_back('(');
		generate_string(s,open-1,close);
		s.pop_back();
	}

	if(close>0 && open<close){
		s.push_back(')');
		generate_string(s, open, close-1);
		s.pop_back();
	}
}
int main(){
	int n;
	cin>>n;
	string s="";
	generate_string(s,n,n);
	for(auto string:valid_sequence){
		cout<<string<<" ";
	}
	return 0;
}