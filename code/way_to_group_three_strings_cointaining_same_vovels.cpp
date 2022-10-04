#include<bits/stdc++.h>
using namespace std;

bool isvovels(char c){
	return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
vector<string> subset(string s){
	vector<string> all_subset;
	int length = 1<<s.size();
	for(int mask = 0;mask<length;mask++){
		string sub_set;

		for(int j=0;j<s.size();j++){	
			if(mask & 1<<j){
				sub_set.push_back(s[j]);
			}
		}
		
		all_subset.push_back(sub_set);
	}
	return all_subset;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> str;
		for(int i=0;i<n;i++){
			string s;cin>>s;
			str.push_back(s);
		}
		unordered_map<string, int> diff_vovel_string;
		for(auto s: str){
			string vovel_str = "";
			set<char> dist_char;
			for(int j=0;j<s.size();j++){
				if(isvovels(s[j])){
					dist_char.insert(s[j]);
				}
			}
			for(auto dist_ch : dist_char){
				
					vovel_str.push_back(dist_ch);
			}
			vector<string> all_subset = subset(vovel_str);
			for(auto sub_str :all_subset){
				if(sub_str!="")
				diff_vovel_string[sub_str]++;
			}


		}

		int ways =0;
		for(auto &pr:diff_vovel_string){
			if(pr.second>=3){
				long long int cnt = pr.second;
				long long int combination = cnt * (cnt-1) * (cnt-2)/6;
				if(pr.first.size() & 1){
					ways+=combination;
				}else{
					ways-=combination;
				}
			}
		}

		cout<<ways<<endl;
		// for(auto pr:diff_vovel_string){
		// 	cout<<pr.first<<" "<<pr.second<<endl;
		// }
		// cout<<endl;
	}
	return 0;
}