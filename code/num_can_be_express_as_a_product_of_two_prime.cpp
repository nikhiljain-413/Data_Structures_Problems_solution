#include<bits/stdc++.h>
using namespace std;
const int N = 2e6+ 10;
int a[N];
int hp[N];
int can_remove[N];
vector<int> distinct_prime(int n){
	vector<int> dist_prime;
	while(n>1){
		int prime = hp[n];
		while(n%prime==0) n/=prime; 
		dist_prime.push_back(prime);
	}
	return dist_prime;
}

int main(){
	
	for(int i=2;i<N;i++){
		if(hp[i] == 0){
			for(int j=i;j<N;j+=i){
				hp[j] = i;
			}
		}
	}

	
	int x,q;cin>>x>>q;

	for(int i=0;i<x;i++){
		cin>>a[i];
	}

	for(int i=0;i<x;i++){
		for(int j=a[i];j<N;j*=a[i]){
			can_remove[j] = 1;
		}
	}

	while(q--){
		

		int n;cin>>n;
		vector<int>prime_factor = distinct_prime(n);
		bool is_possible = false;
		for(int i=0;i<prime_factor.size();i++){
			for(int j=i;j<prime_factor.size();j++){
				int product = prime_factor[i] * prime_factor[j]; 
				if(i==j && n%product!=0) continue;
				int new_no = n/product;
				if(can_remove[new_no]){
					is_possible = true;
					break;
				}
			}
			if(is_possible) break;
		}
		cout<<(is_possible?"YES" : "NO")<<endl;
	}	
	return 0;
}