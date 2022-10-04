#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
static int t[N][N];

bool ispalindrome(string s, int i,int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
            break;
        }
        i++,j--;
    }

    return true;
}

int mcm(string s, int i, int j){
    if(i>=j){
        return 0;
    }
    if(ispalindrome(s,i,j)){
        return 0;
    }
    
    int ans = INT_MAX;
    for(int k=i+1;k<=j;k++){
        int temp = 1 + mcm(s,i,k-1) + mcm(s,k,j);
        ans = min(ans,temp);
    }
    return ans;
}
int main()
{
    string s = "nitink";
    int len = s.length();
    cout<<ispalindrome(s,0,len-1)<<endl;
    cout<<mcm(s,0,len-1);
}