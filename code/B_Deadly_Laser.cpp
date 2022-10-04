#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,sx,sy,d;
        cin>> n>>m>>sx>>sy>>d;
        if((sx-d<=1 && sx+d>=n) || (sy-d<=1 && sy+d>=m) || (sx-d<=1 && sy-d<=1) || (sx+d>=n && sy+d>=m)){
            cout<<-1<<endl;
        }else{
            cout<<n+m-2<<endl;
        }
    }
}