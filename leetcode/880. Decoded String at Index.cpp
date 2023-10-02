#define ll long long
class Solution {
public:
    string decodeAtIndex(string s, int k) {
        ll len = 0;
        ll n = s.size();
        for(ll i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                len++;
            }
            else{
                len = len*(s[i]-'0');
            }
        }
        for(ll i=n-1;i>=0;i--){
            k = k%len;
            if(k==0 && s[i]>='a' && s[i]<='z'){
                string ret = "";
                ret.push_back(s[i]);
                return ret;
            }
            if(s[i]>='a' && s[i]<='z'){
                len--;
            }
            else{
                len = len/(s[i]-'0');
            }
        }
        return "";
    }
};