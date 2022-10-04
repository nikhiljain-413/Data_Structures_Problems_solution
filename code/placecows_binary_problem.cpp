#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long int n;
long long int cows;
int stall[N];
bool can_place_cows(int mid_distance){
	long long int last_pos = -1;
	long long int cows_cnt = cows;
	for(int i=0;i<n;i++){
		if(last_pos == -1 || stall[i] - last_pos>=mid_distance){
			cows_cnt--;
			last_pos=stall[i];
		}if(cows_cnt == 0){
			break;
		}
	}
	return cows_cnt == 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>cows;
		for(int i=0;i<n;i++){
			cin>>stall[i];
		}
		sort(stall, stall+n);
		long long int low=0,high=1e9,mid;
		while(high-low>1){
			mid = (high+low)/2;
			if(can_place_cows(mid)){
				low = mid;
			}else{
				high = mid-1;
			}
		}

		if(can_place_cows(high)){
			cout<<high;
		}else{
			cout<<low;
		}
	}
	return 0;
}