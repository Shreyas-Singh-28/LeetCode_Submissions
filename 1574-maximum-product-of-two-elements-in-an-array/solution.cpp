class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        int l1=-1,l2=-1;
        for(int i=0;i<n;i++) {
            if(nums[i]>=l1) {
                l2=l1;
                l1=nums[i];
            }
            else if(nums[i]<l1 && nums[i]>l2) {
                l2=nums[i];
            }
        }
        return (l1-1)*(l2-1);
    }
};
