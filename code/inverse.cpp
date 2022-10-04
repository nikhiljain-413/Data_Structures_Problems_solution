#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 +7;

long long int binexp(int a,int b,int M){
	int result = 1;
	while(b>0){
		if(b & 1){
			result = (result*1ll*a)%M;
		}
		a = (a*1ll*a)%M;
		b = (b>>1);
	}
	return result;
}

int main(){
	cout<<binexp(2,M-2,M)<<endl;

	
	return 0;
}