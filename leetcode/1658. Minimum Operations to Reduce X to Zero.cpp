#define ll long long
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        ll n = nums.size();
        for(int i=1;i<n;i++){
            nums[i] += nums[i-1];
        }
        ll s = nums.back();
        ll to_find = s - x;
        map<int,int> mp;
        mp[0]=-1;
        int ans = -1;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
            if(mp.find(nums[i]-to_find) != mp.end()){
                ans = max(ans, i - mp[nums[i]-to_find]);
            }
        }
        if(ans == -1) return ans;
        return n - ans;
    }
};