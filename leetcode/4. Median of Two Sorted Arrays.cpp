#define ll long long
class Solution {
public:
    ll INF = 1e7; 
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ll n = nums1.size();
        ll m = nums2.size();
        if(m>n){
            vector<int> v;
            v = nums1;
            nums1 = nums2;
            nums2 = v;
            swap(n,m);
        }
        ll tot = n + m;
        ll half = tot/2;
        ll low = 0, high = m-1;
        while(true){
            // ll mid = (high + low)/2;
            int mid = floor(low+(high-low)/2.0);
            cout<<low<<" "<<high<<" "<<mid<<endl;
            ll rem = half - mid;
            ll indx = rem-2;
            ll nums2_left = (mid>=0)? nums2[mid] : -INF;
            ll nums2_right = (mid+1 < m)? nums2[mid+1]: INF;
            ll nums1_left = (indx>=0)? nums1[indx] : -INF;
            ll nums1_right = (indx+1 < n)? nums1[indx+1]: INF;
            if(nums1_left <= nums2_right && nums2_left<=nums1_right){
                if(tot%2){
                    return min(nums1_right, nums2_right);
                }
                else{
                    return (max(nums1_left, nums2_left) + min(nums1_right, nums2_right)) /2.0;
                }
            }
            else if(nums1_left > nums2_right){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return 1;
    }
};
