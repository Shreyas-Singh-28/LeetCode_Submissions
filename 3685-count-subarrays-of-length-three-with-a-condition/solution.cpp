class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int result{};
        for(int i=0;i<nums.size()-2;i++)
            if((nums[i]+nums[i+2])==(float)nums[i+1]/2)
                result++;
        return result;
    }
};
