class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=INT_MIN;
        int temp=0;
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            if(nums[i]==1) temp++;
            else {
                res=max(res,temp);
                temp=0;
            }
        }
        res=max(res,temp);
        return res;
    }
};
