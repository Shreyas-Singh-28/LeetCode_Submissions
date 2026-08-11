class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        int val=nums[0];
        int cnt=1;
        for(int i=1;i<n;i++) {
            if(nums[i]!=val) {
                cnt--;
            }
            else cnt++;
            if(cnt<0) {
                val=nums[i];
                cnt=1;
            }
        }
        return val;
    }
};