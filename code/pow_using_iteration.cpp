#include<bits/stdc++.h>
using namespace std;
int binmultiply(int ,int );
int calpow(int a,int b){
	int ans = 1;
	while(b){
		if(b&1){
		ans = ans * a;
		}
		
		a=binmultiply(a,a);
		b = b>>1;
	}
	return ans;
}

int binmultiply(int a,int b){
	int ans = 0;
	while(b){
		if(b&1){
			ans = ans +a;
		}
		a = a+a;
		b = b>>1;
	}
	return ans;
}
int main(){
	cout<<calpow(2,6);
	return 0;
}

