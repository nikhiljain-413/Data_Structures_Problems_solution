#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
int t[N][N];

int knapsack(int coins[],int n,int sum){
    for(int i=0;i<=n;i++){
        for(int j= 0;j<=sum;j++){
            if(i==0 ){
                t[i][j] = 0;
            }
            if( j==0){
                t[i][j] = 1;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(coins[i-1]<=sum){
                t[i][j] = t[i][j-coins[i-1]] + t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][sum];
}
int main()
{
    int coins[] = {3,2,5,7};
    int sum =12;
    int n = 4;
    // sort(coins.begin(),coins.end());

    cout<<knapsack(coins,n,sum)<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}