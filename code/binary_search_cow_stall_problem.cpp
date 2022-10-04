#include<bits/stdc++.h>
using namespace std;
// vector<int> v = {3,5,8,12,20};
vector<int> v= { 1,2,8,4,9};
bool can_place_cows(int min_dis,int n){
	int prev_pos = -1;
	for(int i=0;i<v.size();i++){
		if(prev_pos == -1 || v[i] - v[prev_pos]>= min_dis){
			n--;
			prev_pos = i;
		}
		if(n==0) break;
	}
	return n==0;
}
int min_dis(int n){
	int low=0,high = 1e6;
	
	while(high-low>1){
		int mid = (low+high)/2;
		if(can_place_cows(mid,n)){
			low = mid;
		}else{
			high = mid-1;
		}
	}
	if(can_place_cows(high,n)){
		return high;
	}else{
		return low;
	}
}
int main(){
	// int a[]={2,3,5,6,7};
	// cout<<lower_bound(a,a+5,8)<<endl;
	sort(v.begin(),v.end());
	cout<<min_dis(3);
	return 0;
}