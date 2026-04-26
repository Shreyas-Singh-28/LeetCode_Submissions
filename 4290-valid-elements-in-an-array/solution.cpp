class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int found=nums[0];
        int n=nums.size();
        vector<int> res;
        // res.push_back(nums[0]);
        vector<bool> is(n,0);
        is[0]=1;
        is[n-1]=1;
        for(int i=1;i<n;i++) {
            if(nums[i]>found) {
                is[i]=1;
                found=max(found,nums[i]);
            }
        }
        found=nums[n-1];
        for(int i=n-2;i>=0;i--) {
            if(nums[i]>found) {
                is[i]=1;
                found=max(found,nums[i]);
            }
        }
        for(int i=0;i<n;i++) {
            if(is[i]) res.push_back(nums[i]);
        }
        return res;
    }
};
