#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

int const N=1e3+10;
int t[N][N];

bool knapsack(int arr[],int n,int sum){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0 )
                t[i][j] =0; 
            if(j==0){
                t[i][j] = 1;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
            
        }
    }

    return t[n][sum];
}
int main()
{
    int arr[] = {1,2,4,6,7,8,9};
    int n = 7;
    int sum = 10;
    memset(t,-1,sizeof(t));
    cout<<knapsack(arr,n,sum)<<endl;

    for(int i=0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}