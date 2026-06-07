class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        for(int i=1;i<n;i++) {
            res[i]=res[i-1]+nums[i-1];
        }
        int right_sum=0;
        for(int i=n-1;i>=0;i--) {
            res[i]=abs(res[i]-right_sum);
            right_sum+=nums[i];
        }
        return res;
    }
};
