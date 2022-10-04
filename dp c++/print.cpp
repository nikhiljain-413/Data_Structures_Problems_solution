#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int


class Solution

{
    public:
        int t[52][52];
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
        
        void all_string(string &s1,string &s2,string &s,set<string> &v,int i,int j){
            if(i==0  || j==0){
                
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
		vector<string> all_longest_common_subsequences(string s1, string s2)
		{
		    // Code here
		    int n = s1.length();
            int m = s2.length();
            lcs(s1,s2,n,m);
		    string s = "";
            int i = n;
            int j = m;
            set<string> ss;
            vector<string> v;
            all_string(s1,s2,s,ss,i,j);
            for(auto str:ss){
                reverse(str.begin(),str.end());
                v.push_back(str);
                // cout<<str<<endl;
            }
		    
		    return v;
		}
	
};

int main()
{
    int T;
    cin>>T;
    while(T--){
        string t,p;
        // string t = "abaaa";
        // string p = "baabaca";
        cin>>t>>p;
        Solution ob;
        vector<string> ans = ob.all_longest_common_subsequences(t,p);
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
