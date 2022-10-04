#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 +7;

int binexp(int a, int b,int M){
	int result = 1;
	while(b){
		if((b & 1)!=0){
			result = (result *1ll * a)%M;
		}
		a = (a*1ll *a)%M;
		b = (b>>1);
	}
	return result;
}
int main(){
	int N=1e5+10;

	int fact[N];
	fact[0] = 1;
	for(int i=1;i<N;i++){
		fact[i] = (fact[i-1]*1ll  * i)%M;
	}
	// cout<<fact[4]<<endl;
	int q;cin>>q;
	while(q--){
		int n,r;
		cin>>n>>r;
		int numerator = fact[n];
		int denomi = (fact[n-r]);

		int ans = (numerator *1ll* binexp(denomi, M-2, M)) % M;
		cout<<ans<<endl;
	}
	
	return 0;
}