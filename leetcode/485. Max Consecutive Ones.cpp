class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int mx = 0;
        for(auto num : nums){
            if(num) temp++;
            else temp=0;
            mx = max(mx, temp);
        }
        return mx;
    }
};