#include<bits/stdc++.h>
using namespace std;
char t[3][10];
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n=9;
    cout<<"Hello World"<<endl;
    for(int i=1;i<=3;i++){
        for(int j = 1;j<=n;j++){
            if(((i+j) %4 == 0 )|| (i==2 and j%4 == 0)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}