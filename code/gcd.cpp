#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if( a==0){
		return b;
	}
	gcd(b%a, a);
}
int main(){
	cout<< gcd(18,12)<<endl;

	cout<<18*12/gcd(18,12)<<endl;
	
	cout<<__gcd(12,18);
	return 0;
}