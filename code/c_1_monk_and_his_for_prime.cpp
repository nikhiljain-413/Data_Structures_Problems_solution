#include<bits/stdc++.h>
using namespace std;
char upper(char c){
	return 'A' + (c - 'a');
}
char lower(char c){
	return 'a' + (c - 'A');
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' || s[i]<='z'){
			s[i] = upper(s[i]);
		}
		else{
			s[i] = lower(s[i]);
		}
	}

	int result = 0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' || s[i]<='z'){
			result-= s[i];
		}
		else{
			result+= s[i];
		}
	}

	if(result<0){
		result*= -1;
	}
	int flag = 1;
	for(int i=2;i<result;i++){
		if(result%i==0){
			flag = 0;
			break;
		}
	}   
	if(result ==0 || result ==1 || flag == 0){
		cout<<0<<endl;
	}
	else{
		cout<<1<<endl;
	}
	return 0;
}