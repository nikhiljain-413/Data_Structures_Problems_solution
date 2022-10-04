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
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    memset(t,-1,sizeof(t));
    
    cout<<knapsack(arr,n,sum)<<endl;

    vector<int> v;
    // cout<<sum<<endl;
    for(int j=1;j<=sum/2;j++){
        if(t[n][j]){
            v.push_back(j);
        }
    }
    int subset_s =  *(--v.end());
    cout<<(sum - 2*subset_s)<<endl;

    for(int i=0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}