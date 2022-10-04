#include <bits/stdc++.h>
using namespace std;

const int P =1e3+10;
const int N=INT_MAX;
int t[P][P];

int knapsack(int arr[],int n,int sum){

	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			
			if(j==0 ){
				t[i][j] = 1;
			}
			if(i==0){
				t[i][j] = 0;
			}
			
		}
	}
	

	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]<=j){
				t[i][j] =  t[i][j-arr[i-1]] + t[i-1][j];
			}else{
				t[i][j] = t[i-1][j];
			}
		}
	}

	
		return t[n][sum];
	
}

int main() {
	int arr[] = {1,2,3};
	int n = 3;
	int sum = 4;
	cout<<knapsack(arr,n,sum)<<endl;
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=sum;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
