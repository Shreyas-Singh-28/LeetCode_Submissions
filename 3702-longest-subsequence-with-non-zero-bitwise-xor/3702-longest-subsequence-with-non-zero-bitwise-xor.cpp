class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        int xor_val=0;
        bool non_zero=0;
        for(int &ele:nums) {
            if(ele!=0 && non_zero==0) non_zero=1;
            xor_val^=ele;
        }
        if(!non_zero) return 0;
        if(xor_val==0) return n-1;
        return n;
    }
};