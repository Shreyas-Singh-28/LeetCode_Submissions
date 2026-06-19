class Solution {
public:
    bool check(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        int violation=0;
        for(int i=0;i<n;i++) {
            if(nums[i]>nums[(i+1)%n]) {
                if(violation>=1) return false;
                violation++;
            }
        }
        return true;
    }
};
