#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int patients,hospitals;
		cin>>patients>>hospitals;
		int arrival[patients],time_required[patients];
		for(int i=0;i<patients;i++){
			cin>>arrival[i];
		}
		for(int i=0;i<patients;i++){
			cin>>time_required[i];
		} 

		map<int,vector<int>> arrival_discharge;
		set<int> vacant;
		// map<int,vector<int>> hospital_count;
		map<int,int> hospital_count;
		for(int i=0;i<hospitals;i++){
			vacant.insert(i);
		}

		for(int i=0;i<patients;i++){
			if(arrival_discharge.find(arrival[i]) != arrival_discharge.end()){
				auto vec = arrival_discharge[arrival[i]];
				arrival_discharge.erase(arrival[i]);
				for(auto value: vec){
					vacant.insert(value);
				}
			}
			if(vacant.size() == 0){
				continue;
			}
			auto ho_ptr = vacant.lower_bound(i%hospitals);
			if(ho_ptr == vacant.end()){
				ho_ptr = vacant.begin();
			} 
			int ho_no = *ho_ptr;
			hospital_count[ho_no]++;
			// hospital_count[ho_no].push_back(i);
			arrival_discharge[arrival[i]+time_required[i]].push_back(ho_no);
			vacant.erase(ho_no);
		}

		for(auto count: hospital_count){
			cout<<count.second<<" ";
			// cout<<count.first<<" "<<count.second<<" "<<endl;
			// cout<<count.first<<" ";
			// for(auto indx: count.second){
			// 	cout<<indx<<" ";
			// }
			// cout<<endl;
		}
	}
	
	return 0;
}