#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v,int value){
	int low=0,high = v.size()-1;
	while(high-low>1){
		int mid = (high+low)/2;
		if(v[mid]<value){
			low = mid+1;
		}else{
			high = mid;
		}
	}
	if(v[low]>=value){
		return low;
	}
	else if(v[high]>=value){
		return high;
	}else{
		return -1;
	}

}
int upper_bound(vector<int> &v,int value){
	int low=0,high = v.size()-1;
	while(high-low>1){
		int mid = (high+low)/2;
		if(v[mid]<=value){
			low = mid+1;
		}else{
			high = mid;
		}
	}
	if(v[low]>value){
		return low;
	}
	else if(v[high]>value){
		return high;
	}else{
		return -1;
	}
}
int main(){
	vector<int> v = {4,2,5,6,1,8,9,3};
	int l_b = lower_bound(v,9);
	int u_b = upper_bound(v,9);
	cout<<l_b<<" "<<(l_b == -1? -1 : v[l_b])<<endl;
	cout<<u_b<<" "<<(u_b == -1? -1 : v[u_b]);
	return 0;
}