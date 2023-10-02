class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increasing = true;
        bool decreasing = true;
        for(int i=1;i<n;i++){
            increasing &= (nums[i-1]<=nums[i]);
            decreasing &= (nums[i-1]>=nums[i]);
        }
        return increasing || decreasing;
    }
};