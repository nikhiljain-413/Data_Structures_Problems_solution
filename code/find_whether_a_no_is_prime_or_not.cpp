#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool> prime(N,1);

int main(){
	prime[0] = prime[1] =0;
	for(int i=2; i<N; i++){
		if(prime[i] == 1){
			for(int j = 2*i ;j<N; j+=i){
				prime[j] = 0;
			}
		}
	}
	// for(int i=1;i<=100;i++){
	// 	cout<<prime[i]<<endl;
	// }
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(prime[n]){
			cout<<"prime"<<endl;
		}else{
			cout<<"not prime"<<endl;
		}
	}
	return 0;
}