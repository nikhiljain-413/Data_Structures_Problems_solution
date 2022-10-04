#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
int t[N][N];

knapsack(int weight[], int value[],int n, int cap){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=cap;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=cap;j++){
            if(weight[i-1]<=j){
                t[i][j] = value[i-1] + t[i-1][j-weight[i-1]];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][cap] ;
}

int main()
{
    int weight[] = {1,2,4,5};
    int value[] = {1,3,5,7};
    memset(t,-1,sizeof(t));
    int n = 4;
    int cap =10;
    cout<<knapsack(weight, value, n, cap)<<endl;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=cap;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}