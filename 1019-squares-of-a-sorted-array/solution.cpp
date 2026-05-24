class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        int k=n-1;
        vector<int> ans(n);
        while(l<=r) {
            if(nums[l]*nums[l]<nums[r]*nums[r]) {
                ans[k--]=nums[r]*nums[r];
                r--;
            }
            else{
                ans[k--]=nums[l]*nums[l];
                l++;
            }
        }
        return ans;
    }
};
