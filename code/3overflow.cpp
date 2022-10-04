// 10^-9 < int < 10^9
// 10^-12 < long int<10^12
// 10^-18 < long long int < 10^18
// int mx = INT_MAX;


#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int a=100000;
	int b=100000;
	long int c = a* 1LL *b;
	double d = 1e24;
	cout<<fixed<<setprecision(0)<<d<<endl;
	cout<<c<<endl;
	cout<<c;
	return 0;
}