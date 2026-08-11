class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=static_cast<int>(nums.size());
        int k=0;
        for(int i=0;i<n;i++) {
            if(nums[i]!=val) {
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};