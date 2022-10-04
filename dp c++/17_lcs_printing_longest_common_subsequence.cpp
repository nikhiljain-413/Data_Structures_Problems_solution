#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N=1e3+10;
int t[N][N];

int lcs(string s1,string s2,int n,int m){
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
   
   return t[n][m];
}

void all_string(string s1,string s2,string &s,set<string> &v,int i,int j){
    if(i==0  || j==0){
        // string b= "";
        // while(j>=1){
        //     b.push_back(s2[j-1]);
        // }
        // while(i>=1){
        //     b.push_back(s1[i-1]);
        // }
        v.insert(s);
        return;
    }

    if(s1[i-1] == s2[j-1]){
        s.push_back(s1[i-1]);
        all_string(s1,s2,s,v,i-1,j-1);
        s.pop_back();
    }
    else if(t[i-1][j] > t[i][j-1]){
        all_string(s1,s2,s,v,i-1,j);
    }else if(t[i-1][j] < t[i][j-1]){
        all_string(s1,s2,s,v,i,j-1);
    }
    else{
        all_string(s1,s2,s,v,i-1,j);
        all_string(s1,s2,s,v,i,j-1);
    }
}
int main()
{
    string s1 = "abaaa";
    string s2 = "baabaca";
    int n = s1.length();
    int m = s2.length();
    cout<<lcs(s1,s2,n,m)<<endl;

    string s = "";
    int i = n;
    int j = m;
    set<string> v;

    // while(i>=1 && j>=1){
    //     if(s1[i-1] == s2[j-1]){
    //         s.push_back(s1[i-1]);
    //         i--;
    //         j--;
    //     }else{
    //         if(){
    //             i--;
    //         }else if(t[i-1][j]<t[i][j-1]){
    //             j--;
    //         }else{

    //         }
    //     }
    // }
    // reverse(s.begin(),s.end());
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    all_string(s1,s2,s,v,i,j);
    for(auto s:v){
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    // cout<<s;
}