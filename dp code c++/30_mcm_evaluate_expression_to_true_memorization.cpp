#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int t = 1e3+10;
unordered_map<string,int> mp;

int mcm(string s, int i, int j, bool istrue){
    if(i>j){
        return 0;
    }
    if(i==j){
        if(istrue == true){
            
            return s[i] == 't';
        }else{
            return s[i] == 'f';
        }
    }

    string key = to_string(i);
    key.push_back(' ');
    key.append(to_string(j));
    key.push_back(' ');
    key.append(to_string(istrue));

    if(mp.find(key) != mp.end()){
        return mp[key];
    }

    int ans = 0;
    for(int k = i+1 ;k<j; k=k+2){
        int temp = 0;
        
        int lt = mcm(s,i,k-1,true);
        int lf = mcm(s,i,k-1,false);
        int rt = mcm(s,k+1,j,true);
        int rf = mcm(s,k+1,j,false);
        if(s[k] == '|'){
            if(istrue == true){
            temp = (lf * rt) + (lt * rf) + (lt * rt);
            }else{
                temp = lf * rf;
            }
        }else if(s[k] == '&'){
            if(istrue == true){
                temp = lt * rt;
            }else{
                temp = (lf * rt) + (lt * rf) + (lf * rf);
            }

        }else if(s[k] == '^'){
            if(istrue == true){
                temp = (lt * rf) + (lf * rt);

            }else{
                temp = (lt * rt) + (lf * rf);
            }
        }
        ans = ans+temp;
    }

    return mp[key] = ans;
}
int main()
{
    string s = "t|f^t&f";
    // string s = "t|f&t";
    int ways = mcm(s,0,s.length() -1,true);
    cout<<ways;
}