#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
int t[N][N];

int knapsack(int l[],int price[], int n,int length){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=length+1;j++){
            if(i == 0 || j== 0){
                t[i][j] == 0;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=length;j++){
            if(l[i-1]<=j){
                t[i][j] = max(price[i-1] + t[i][j-l[i-1]], t[i-1][j]);
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][length];
}
int main()
{
    int l[]={1 ,2 ,4,6,8};
    int price[] = {1,3,5,7,8};
    int length = 10;
    int n = 5;
    cout<<knapsack(l,price,n,length)<<endl;;
    for(int i=0;i<=n;i++){
        for(int j=0;j<= length;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}