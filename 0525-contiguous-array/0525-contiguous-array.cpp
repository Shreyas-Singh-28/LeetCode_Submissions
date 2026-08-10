class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // 0 -1 0
        // 0 -1 0 -1
        // 0 -1 0 1 2 3 4 5 4 3 2
        // 0 -1 0 -1 0
        int n=static_cast<int>(nums.size());
        unordered_map<int,int> mp;
        mp[0]=-1;
        int res=0;
        int pref=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0) pref-=1;
            else pref+=1;
            if(!mp.count(pref)) mp[pref]=i;
            else res=max(res,i-mp[pref]);
        }
        return res;
    }
};