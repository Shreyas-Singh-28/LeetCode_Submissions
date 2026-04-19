class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> s;
        for(auto &x:nums) s.insert(x*x);
        nums.assign(s.begin(),s.end());
        return nums;
    }
};
