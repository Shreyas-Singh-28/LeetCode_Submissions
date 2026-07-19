class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            if(i==0 && n>=2) {
                if(nums[i]>nums[i+1]) return i;
            }
            else if(i==n-1 && n>=2) {
                if(nums[i]>nums[i-1]) return i;
            }
            else if(n>=3 && nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i;
        }
        return 0;
    }
};
