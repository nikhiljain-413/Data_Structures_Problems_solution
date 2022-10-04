#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int n;
long long int m;
int trees[N];

bool issufficient(int height){
	long long int total_wood = 0;
	for(int i=0;i<n;i++){
		if((trees[i]-height)>0){
			total_wood += (trees[i] - height);
		}
	}
	return total_wood>=m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>trees[i];
		}
		long long int low = 0,high = 1e9,mid ;
		while((high - low)>1){
			mid = (high+low)/2;
			if(issufficient(mid)){
				low = mid;
			}else{
				high = mid-1;
			}
		}
		if(issufficient(high)){
			cout<<high<<endl;
		}else{
			cout<<low<<endl;
		}
	}
	
	return 0;
}