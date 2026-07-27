class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        sort(nums.begin(),nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};
