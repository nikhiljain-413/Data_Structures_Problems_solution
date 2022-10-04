#include<bits/stdc++.h>
using namespace std;
const long long M = 1e18+10;
int binexprecur(int a,int b){
	if(b==0){
		return 1;
	}
	int res = binexprecur(a,b/2);
	if(b&1!=0){
		return a * res * res;
	}else{
		return res*res;
	}
}
int binreciter(int a,int b){
	int ans = 1;
	while(b){
		if(b&1 !=0){
			ans = ans*a;
		}
		a = a*a;
		b=b>>1;
	}
	return ans;
}

int binExp(long long int a,long long int b){
	int ans =1;
	while(b){
		if(a&1 !=0){
			ans = binmultiply(ans, a);
		}
		a =binmultiply(a,a);
		b = b>>1;
	}

	return ans
}

int binmultiply(int a,int b){
	int product = 0;
	while(b){
		 if(b&1!=0){
		 	ans = (ans+a)%M;
		 }
		 ans = (ans+ans)%M;
		 b = b>>1;
	}
	return product;
}
int main(){
	cout<<binexprecur(2,13)<<endl;
	cout<<binreciter(2,13)<<endl;
	cout<<pow(2,13)<<endl;
	return 0;
}