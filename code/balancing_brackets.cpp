#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> mp = {{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
string isbalance(string s){
	stack<char> st;
	for(char symbol :s ){
		if(mp[symbol]<0){
			st.push(symbol);
		}else{
			if(st.empty()) return "NO";
			char sym = st.top();
			st.pop();
			if(mp[sym] + mp[symbol]!=0)
				return "NO";
 		}
	}

	if(st.empty())
		return "YES";
	else
		return "NO";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		// stack<char> st;
		string s;
		cin>>s;
		// int flag=1;
		// // cout<<st.top()<<endl;
		// // cout<<s.length()<<" "<<s.size()<<endl;
		// for(int i=0;i<s.length();i++){
		// 	if(s[i] == '(' || s[i] == '{' ||s[i] == '[')
		// 	st.push(s[i]);
		// 	else if((s[i] == ')' || s[i] == '}' || s[i] == ']') && st.empty()){
		// 		flag = 0;
		// 		break;
		// 	}
		// 	else if((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') ||(s[i] == ']' && st.top() == '[')){
		// 		st.pop();
		// 	}else{
		// 		flag = 0;
		// 		break;
		// 	}
		// }
		// if(st.empty() && flag == 1){
		// 	cout<<"YES"<<endl;
		// }
		// else{
		// 	cout<<"NO"<<endl;
		// }

		cout<<isbalance(s)<<endl;
	}
	
	return 0;
}