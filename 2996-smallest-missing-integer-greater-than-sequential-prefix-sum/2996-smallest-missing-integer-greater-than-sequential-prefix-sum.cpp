class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        unordered_set<int> s(nums.begin(),nums.end());
        int i=0;
        int summ=nums[0];
        while(i+1<n && (nums[i+1]-nums[i])==1) {
            summ+=nums[i+1];
            i++;
        }
        while(true) {
            if(!s.count(summ)) return summ;
            else summ++;
        }
        return summ;
    }
};