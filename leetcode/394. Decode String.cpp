class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]==']'){
                string temp = "";
                string temp_no="";
                while(!st.empty() && st.top()!='['){
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                while(!st.empty() && st.top()>='0' && st.top()<='9'){
                    temp_no.push_back(st.top());
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                reverse(temp_no.begin(), temp_no.end());
                int no = stoi(temp_no);
                for(int i=0;i<no;i++){
                    for(int j=0;j<temp.size();j++){
                        st.push(temp[j]);
                    }
                }
                continue;
            }
            st.push(s[i]);
        }
        string ret = "";
        while(!st.empty()){
            ret.push_back(st.top());
            st.pop();
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};