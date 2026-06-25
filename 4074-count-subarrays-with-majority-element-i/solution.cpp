class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int res=0;
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            int cnt_target=0;
            for(int j=i;j<n;j++) {
                if(nums[j]==target) cnt_target++;
                if(cnt_target>(j-i+1)/2) res++;
            }
        }
        return res;
    }
};
