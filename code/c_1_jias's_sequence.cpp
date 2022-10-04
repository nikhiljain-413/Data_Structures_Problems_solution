#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int size;
		cin>>size;
		long long int x;
		long long int product=1;
		for(int i=0;i<size;i++){
			cin>>x;
			product *= x;
		}
		int sig_dig = product%10;
		if(sig_dig==2 || sig_dig==3 || sig_dig==5){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}