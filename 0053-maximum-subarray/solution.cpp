class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int start=-1;
        // int ans_start=-1,ans_end=-1;
        int curr_sum=0;
        int max_sum=-10000;
        for(int num:nums) {
            // if(curr_sum==0) start=i;
            curr_sum+=num;
            if(curr_sum>max_sum) {
                max_sum=curr_sum;
                // ans_start=start;
                // ans_end=i;
            }
            if(curr_sum<0) curr_sum=0;
        }
        return max_sum;
    }
};
