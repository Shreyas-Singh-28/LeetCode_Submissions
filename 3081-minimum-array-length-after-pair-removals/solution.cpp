class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        // 1 1 1 1
        // 2 2 2
        // 2
        // 1 1 3
        // 2 3 3 3 4
        int n=static_cast<int>(nums.size());
        int l=n/2-1,r=n-1;
        int ans=n;
        while(l>=0) {
            // cout<<l<<' '<<r<<'\n';
            if(nums[l]<nums[r]) {
               ans-=2;
               r--;
            }
            l--;
        }
        l++;
        r++;
        return ans;
    }
};
