class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int n=static_cast<int>(nums.size());
        long long res=0;
        for(int i=n-1;i>n-1-k;i--) {
            res+=(1LL*nums[i]*mul);
            if(mul>1) mul--;
        }
        return res;
    }
};
