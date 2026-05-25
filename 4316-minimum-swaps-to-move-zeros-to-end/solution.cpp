class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero=0;
        int n=nums.size();
        for(int num:nums) if(num==0) zero++;
        int res=0;
        for(int i=n-1;i>n-1-zero;i--) {
            if(nums[i]!=0) res++;
        }
        return res;
    }
};
