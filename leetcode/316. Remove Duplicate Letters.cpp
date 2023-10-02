class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last_indx(26, 0);
        vector<int> present(26, 0);
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            last_indx[s[i]-'a'] = i;
        }
        for(int i=0;i<n;i++){
            auto ch = s[i];
            if(present[ch- 'a']) continue;
            while(st.size() && st.top()>ch && last_indx[st.top() - 'a']>i){
                present[st.top()- 'a'] = false;
                st.pop();
            }
            st.push(ch);
            present[ch- 'a'] = true;
        }
        string ret = "";
        while(st.size()){
            ret.push_back(st.top());
            st.pop();
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};