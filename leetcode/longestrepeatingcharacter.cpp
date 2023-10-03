class solution{
public:
    int characterReplacement(string S, int K) {
        // code here


unordered_map<char,int> m;
        int i=0;
        int j=0;
        int n=s.size();
        int maxi=INT_MIN;
        bool flag=true;
        while(i<n && j<n){
            if(flag){
                m[s[j]]++;
            }
            int maxFreq=0;
            for(auto it:m){
                if(it.second>maxFreq){
                    maxFreq=it.second;
                }
            }
            int z=(j-i+1)-maxFreq;
             if(z<=k){
                maxi=max(maxi,j-i+1);
                j++;
                flag=true;
            }
            else{
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
                flag=false;
            }
        }
        return maxi;
    }
};
