#include<bits/stdc++.h>
using namespace std;
int main(){
	// string s;
	// getline(cin,s);
	// for(int i=0;i<s.size();i++){
	// 	if(s[i] == ' '){
	// 		cout<<endl;
	// 		// continue;
	// 	}
	// 	else if((s[i] - 'a')>=0){
	// 		cout<<char(s[i]-'a'+'A');
	// 	}
	// 	else{
	// 		cout<<s[i];
	// 	}
	// }
	

	while(true){
		string s;
		cin>>s;
		if(s.size() == 0){
			break;
		}
		for(int i=0;i<s.size();i++){
			cout<<char('A' + (s[i] - 'a'));
		}
		cout<<endl;
	}
	return   0;
} 