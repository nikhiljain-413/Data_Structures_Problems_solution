#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int arr[42][42];
	for(int i=1;i<=41;i++){
		for(int j=1;j<=i;j++){
			if(j==1 || j==i){
				arr[i][j] = 1;
				continue;
			}
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
	while(t--){
		int h;
		cin>>h;
		
		for(int i=1;i<=h;i++){
			for(int j=1;j<=i;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}