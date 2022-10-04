#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
int t[N][N];

knapsack(int weight[], int value[],int n, int cap){
    if(cap==0 || n==0){
        return 0;
    }

    if(t[n][cap]!=-1){
        return t[n][cap];
    }
    int ans = 0;
    if(weight[n-1]<=cap){
        ans = value[n-1] + knapsack(weight,value,n-1,cap-weight[n-1]);
    }else{
        ans = knapsack(weight,value,n-1,cap);
    }

    return t[n][cap] = ans;
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