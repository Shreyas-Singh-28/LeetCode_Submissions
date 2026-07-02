class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=static_cast<int>(nums.size());
        unordered_set<int> s;
        int res=0;
        for(int &num:nums) s.insert(num);
        for(int i=0;i<n;i++) {
            if(s.count(nums[i]+diff) && s.count(nums[i]+(2*diff))) res++;
        }
        return res;
    }
};
