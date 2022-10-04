#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool> primes(N,1);
vector<int> lowest_prime(N,0), highest_prime(N,0);

int main(){
	primes[0] = primes[1] =0;
	for(int i=2;i<N;i++){
		if(primes[i] == 1){
			lowest_prime[i] = highest_prime[i] = i;
			for(int j = 2*i; j<N; j+=i){
				primes[j] = 0;
				highest_prime[j] = i;
				if(lowest_prime[j] == 0){
					lowest_prime[j] = i;
				}
			}
		}
	}

	// for(int i=1;i<=100;i++){
	// 	cout<<primes[i]<<" "<<lowest_prime[i]<<" "<<highest_prime[i]<<endl; 
	// }


	vector<int> primes_factor;
	while(num>1){
		int prime_factor = highest_prime[num];
		while(num%prime_factor == 0){
			num /= prime_factor;
			primes_factor.push_back(prime_factor);
		}
	}

	for(auto prime:primes_factor){
		cout<<prime<<endl;
	}
	return 0;
}