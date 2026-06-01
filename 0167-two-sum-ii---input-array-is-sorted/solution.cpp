class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
            int complement=target-nums[i];
            if(m.count(complement)) return {min(i,m[complement])+1,max(i,m[complement])+1};
            m[nums[i]]=i;
        }
        return {};
    }
};
