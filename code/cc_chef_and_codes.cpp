#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    string s;cin>>s;
	    cin.ignore();
	    string a;getline(cin,a);
	    int arr[52]={0};
	    string new_s = "";
	    for(int i=0;i<a.length();i++){

	    	if(a[i]>='a' && a[i]<='z'){
	    		if(arr[a[i] - 'a'] == 0){
	    			new_s+=a[i];
	    		}
	    		arr[a[i] - 'a']++;
	    	}else if(a[i]>='A' && a[i]<='Z'){
	    		if(arr[a[i] - 'A' + 26] == 0){
	    			new_s+=a[i];
	    		}
	    		arr[a[i] - 'A' + 26]++;
	    	}
	    }
	    // cout<<new_s<<endl;
	    map<int,vector<char>> m;
	    int ch = 25;
	    for(int i=0;i<new_s.length();i++){
	    	if(new_s[i]>='a' && new_s[i]<='z'){
	    		m[-arr[(new_s[i] - 'a')]].push_back (new_s[i]);
	    	}else if(new_s[i]>='A' && new_s[i]<='Z'){
	    		m[-arr[(new_s[i] - 'A' + 26)]].push_back(new_s[i]);
	    	}
	    	
	    }
	    // for(auto it:m){
	    // 	cout<<it.first<<" -> ";
	    // 	for(auto i:it.second){
	    // 		cout<<i<<" ";
	    // 	}
	    // 	cout<<endl;
	    // }

	    unordered_map<char,char> u_m;
	    for(auto it:m){
	    	// cout<<it.first<<" -> ";
	    	auto i = it.second;
	    	for(int j = i.size()-1;j>=0;j--){
	    		u_m[i[j]] = s[ch];
	    		ch--;
	    	}
	    	
	    	// cout<<endl;
	    }
	    // for(auto it:u_m){
	    // 	cout<<it.first<<" "<<it.second<<endl;
	    // }
	    for(int i=0;i<a.length();i++){
	    	if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
	    		cout<<u_m[a[i]];
	    	}else{
	    		cout<<a[i];
	    	}
	    }
	    cout<<endl;
	}
	return 0;
}
	    