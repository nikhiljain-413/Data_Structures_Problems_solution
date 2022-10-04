#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,reverse_s="";
	getline(cin,s);
	for(int i= s.size()-1;i>=0;i--){
		reverse_s.push_back(s[i]);
		// reverse_s+=s[i];
	}
	cout<<reverse_s;
	return 0;
}