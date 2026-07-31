class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        vector<int> ans(n,1);
        int k=0;
        for(int i=0;i<n;i++) {
            if(nums[i]%2==0) {
                ans[k++]=0;
            }
        }
        return ans;
    }
};
