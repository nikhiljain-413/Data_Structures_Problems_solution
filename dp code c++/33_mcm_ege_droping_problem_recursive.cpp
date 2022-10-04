#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

int mcm(int egg, int flour){
    
    if(egg == 1){
        return flour;
    }
    if(flour == 1 || flour == 0){
        return flour;
    }

    int ans=INT_MAX;
    for(int k=1;k<=flour;k++){

        int temp = 1 + max(mcm(egg-1,k -1) , mcm(egg, flour - k));

        ans = min(ans,temp);
    }

    return ans;
}
int main()
{
    int egg = 3;
    int flour = 5;
    int ans = mcm(egg, flour);
    cout<<ans; 
}