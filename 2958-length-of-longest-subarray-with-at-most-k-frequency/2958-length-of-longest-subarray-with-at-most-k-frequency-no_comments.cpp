class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // 0 1 1 1 2 2 2 3 3

        // 0 1 1 2 2 3 3 4 4

        // 0 1 2 3 4 5 6 7

        // end of first, end of second

        int n=static_cast<int>(nums.size());
        int l=0;
        int res=0;
        unordered_map<int,int> mp;
        for(int r=0;r<n;r++) {
            mp[nums[r]]++;
            while(mp[nums[r]]>k) {
                mp[nums[l++]]--;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};