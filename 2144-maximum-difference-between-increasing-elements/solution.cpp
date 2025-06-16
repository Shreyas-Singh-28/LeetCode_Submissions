class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int d=-1;
        int min{nums[0]};
        for(int i=1;i<nums.size();i++) {
            if(min>nums[i]) {
                min=nums[i];
                continue;
            }
            if(nums[i]-min>0 && nums[i]-min>d) {
                d=nums[i]-min;
            }
        }
        return d;
    }
};
