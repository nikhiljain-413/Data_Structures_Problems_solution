class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int> cnt;
        map<int,int> hm;
        for(auto num: nums) cnt[num]++;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            if(cnt[num]==0) continue;
            if(hm.find(num)!=hm.end()){
                hm[num]--;
                hm[num+1]++;
                cnt[num]--;
                if(hm[num]==0) hm.erase(num);
            }
            else if(cnt[num]>0 && cnt[num+1]>0 && cnt[num+2]>0){
                cnt[num]--;
                cnt[num+1]--;
                cnt[num+2]--;
                hm[num+3]++;
            }
            else{
                cout<<i<<" "<<num<<" "<<hm[num]<<endl;
                return false;
            }
        }
        return true;
    }
};