#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	cout<<(s[s.size()-1] - '0') + 2;
	return 0;
}