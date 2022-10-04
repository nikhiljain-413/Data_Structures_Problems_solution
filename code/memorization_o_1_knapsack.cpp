#include<bits/stdc++.h>
using namespace std;
const int N =1e3+10; 
int t[N][N];

int knapsack(int weight[],int value[],int cap,int n){
	if(n==0 || cap==0){
		return t[n][cap] = 0;
	}
	if(t[n][cap] != -1){
		return t[n][cap];
	}
	else if(weight[n-1]<=cap){
		return t[n][cap] = max(value[n-1] + knapsack(weight,value,cap-weight[n-1],n-1),
			knapsack(weight,value,cap,n-1));
	}else{
		return t[n][cap] = knapsack(weight,value,cap,n-1);
	}
}
int main(){
	int weight[] = {1,2,4,5};
	int value[] = {1,3,5,7};
	int cap = 10;
	memset(t,-1,sizeof(t));
	cout<<knapsack(weight, value, cap, 4)<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<11;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

