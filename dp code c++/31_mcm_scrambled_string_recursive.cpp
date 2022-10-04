#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
unordered_map<string,int> mp;

bool mcm(string s1, string s2){
    
    if(s1.compare(s2) == 0){
        return true;
    }
    if(s1.length()<=1){
        return false;
    }

    bool ans =false;
    int i=0,j=s1.length() -1;
    for(int k=i+1;k<=j;k++){
        if((mcm(s1.substr(i,k) , s2.substr(j-k+1,k))  &&  mcm(s1.substr(k,j+1-k) , s2.substr(i,j+1-k))) ||
            (mcm(s1.substr(i,k) , s2.substr(i,k))  &&  mcm(s1.substr(k,j+1-k) , s2.substr(k,j+1-k))))
        { 
            // mcm(s1, s2, i,k-1);
            // mcm(s1, s2, k,j)
            return true;
            break;
        }
    }
    return ans;
}
int main()
{
    string s1 = "abcde";
    // string s2 = "cdeab";
    string s2 = "baecd";
    bool ans = mcm(s1,s2);
    cout<<ans;
}