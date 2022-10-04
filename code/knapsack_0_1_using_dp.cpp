#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int t[N][N];

int knapsack(int weight[],int value[],int cap,int n){
	for(int i=0;i<n+1;i++){
		for(int j=0;j<cap+1;j++){
			if(i==0 || j==0){
				t[i][j] = 0;
			}
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<cap+1;j++){
			if(weight[i-1]<=j){
				t[i][j] = max(value[i-1] + t[i-1][j-weight[i-1]],t[i-1][j]);
			}
			else{
				t[i][j] = t[i-1][j];
			}
		}
	}
	return t[n][cap];
}
int main(){
	int weight[] = {1,2,4,5};
	int value[] = {1,3,5,7};
	int cap = 10;
	int n = 4;
	cout<<knapsack(weight,value,cap,n)<<endl;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<cap+1;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

