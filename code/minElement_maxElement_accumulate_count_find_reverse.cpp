#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {4 ,5,6,6,2,3,8};
	// auto it = max_element(v.begin(),v.end());
	// cout<<(*it)<<endl;
	int max = *max_element(v.begin(),v.end());
	cout<<max<<endl;
	int min = *min_element(v.begin(),v.end());
	cout<<min<<endl;
	int cnt = count(v.begin(), v.end(),6);
	cout<<cnt<<endl;
	auto it = find(v.begin(), v.end(),3);
	if(it!=v.end()){
		cout<<(*it)<<endl;
	}else{
		cout<<"NOT FOUND"<<endl;
	}

	reverse(v.begin(), v.end());
	for(auto value:v){
		cout<<value<<" ";
	}
	cout<<endl;
	string s ="nikhil jain";
	reverse(s.begin(), s.end());
	cout<<s<<endl;
	// for(auto val:s){
	// 	cout<<val;
	// }
	return 0;
}