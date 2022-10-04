#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
static int t[N][N];
unordered_map<string,int> mp;

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
    
    // string temp = to_string(i);
    // temp.push_back(' ');
    // temp.append(to_string(j));

    // if(mp.find(temp) != mp.end()){
    //     return mp[temp];
    // }

    if(t[i][j] != -1){
        return t[i][j];
    }

    int ans = INT_MAX;
    for(int k=i+1;k<=j;k++){
        int left,right;
        if(t[i][k-1] != -1){
            left = t[i][k-1];
        }else{
            t[i][k-1] = mcm(s,i,k-1);
            left = t[i][k-1];
        }

        if(t[k][j] != -1){
            right = t[k][j];
        }else{
            t[k][j] = mcm(s,k,j);
            right = t[k][j];
        }

        // int temp = 1 + mcm(s,i,k-1) + mcm(s,k,j);
        int temp = 1+ left + right;
        ans = min(ans,temp);
    }
    // return mp[temp] = ans;
    return t[i][j] = ans;
}
int main()
{
    string s = "nitik";
    int len = s.length();
    // cout<<ispalindrome(s,0,len-1)<<endl;
    memset(t,-1,sizeof(t));
    cout<<mcm(s,0,len-1);
}