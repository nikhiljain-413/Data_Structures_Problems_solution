#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int t[N][N];

void knapsack(int weight[],int sum,int n){
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			if(i==0){
				t[i][j] = 0;
			}if(j==0){
				t[i][j] = 1;
			}
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(weight[i-1]<=j){
				t[i][j] = t[i-1][j - weight[i-1]] + t[i-1][j];
			}else{
				t[i][j] = t[i-1][j];
			}
		}
	}
}

int main(){
	int weight[] = {1,2,4,5,6,8};
	int sum = 10;
	int n = 6;
	int total = 0;
	for(int i=0;i<n;i++){
		total+=weight[i];
	}
	knapsack(weight,total,n);
	cout<<t[n][sum]<<endl;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<total+1;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}