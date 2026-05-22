class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto l_iter=lower_bound(nums.begin(),nums.end(),target);
        auto u_iter=upper_bound(nums.begin(),nums.end(),target);
        int l=-1,u=-1;
        if(l_iter!=nums.end() && nums[l_iter-nums.begin()]==target) {
            l=l_iter-nums.begin();
            u=l+(u_iter-l_iter)-1;
        }
        return {l,u};
    }
};
