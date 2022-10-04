#include<bits/stdc++.h>
using namespace std;

int calpow(int a,int b){
	if(b==0){
		return 1;
	}
	int pow = calpow(a,b/2);
	int ans;
	if(b & 1){
		ans = a * pow *pow;
	}else{
		ans = pow * pow;
	}
	return ans;
}
int main(){
	cout<<calpow(2,5);
	return 0;
}

