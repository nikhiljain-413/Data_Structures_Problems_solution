#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		string s;
		cin>>s;
		long long int product = 0;
		for(int i=0;i<size;i++){
			product += ((s[size-1-i] - '0') * pow(2,i));
		}
		cout<<product<<endl;
	}
	return 0;
} 