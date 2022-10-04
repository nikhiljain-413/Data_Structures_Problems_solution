#include<bits/stdc++.h>
using namespace std;
void printbinary(int n){
	for(int i=30;i>=0;i--){
		if((n>>i) & 1){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	cout<<endl;
}
int main(){
	int n;cin>>n;
	vector<int> days[n];
	for(int i=0;i<n;i++){
		int day;cin>>day;
		for(int j=0;j<day;j++){
			int day_no;cin>>day_no;
			days[i].push_back(day_no);
		}
	}

	// for(auto day:days){
	// 	for(auto value:day){
	// 		cout<<value<<" ";
	// 	}
	// 	cout<<endl;
	// }

	vector<int> bitmask;
	for(auto day: days){
		int mask = 0;
		for(auto value:day){
			mask = (mask | (1<<value));
		}
		bitmask.push_back(mask);
	}

	// for(int i=0;i<bitmask.size();i++){
	// 	cout<<bitmask[i]<<endl;
	// 	printbinary(bitmask[i]);
	// }
	int max_days = 0;
	for(int i=0;i<bitmask.size()-1;i++){
		for(int j=i+1;j<bitmask.size();j++){
			int common_days = __builtin_popcount(bitmask[i] & bitmask[j]);
			cout<<i<<" "<<j<<" "<<common_days<<endl;
			max_days= max(max_days,common_days);
		}
	}
	cout<<max_days;
	return 0;
}