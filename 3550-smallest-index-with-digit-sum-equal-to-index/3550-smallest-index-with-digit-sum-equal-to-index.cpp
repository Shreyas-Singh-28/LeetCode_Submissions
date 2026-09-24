class Solution {
public:
    int sum_digits(int x) {
        int res=0;
        while(x>0) {
            int r=x%10;
            res+=r;
            x/=10;
        }
        return res;
    }
    int smallestIndex(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            if(i==sum_digits(nums[i])) return i;
        }
        return -1;
    }
};