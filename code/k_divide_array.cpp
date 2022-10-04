#include<bits/stdc++.h>
using namespace std;
vector<long long> A = {4,7,9,5,2};
int solution(int N,int K){
	multiset<long long > v;
	for(auto value:A){
		long long val = value%K;
		if(val<=K/2){
			val = val;
		}else{
			val = K-val;
		}
		v.insert(val);
	}
	int i=0;
	vector<long long> vv(N);
	for(auto val: v){
		// cout<<val<<" ";
		vv[i] = val;
		i++;
	}
	// cout<<endl;
	long long sum =0;
	for(int i=0;i<K;i++){
		// cout<<vv[i]<<" ";
		sum+= vv[i];
	}
	return sum;
}
int main(){

	// cin>>t;

		
		long long res = solution(5,4);
		cout<<res<<endl;

	return 0;
}