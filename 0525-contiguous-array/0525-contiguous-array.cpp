class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // 0 -1 0
        // 0 -1 0 -1
        // 0 -1 0 1 2 3 4 5 4 3 2
        // 0 -1 0 -1 0
        int n=static_cast<int>(nums.size());
        vector<int> pref(n+1);
        pref[0]=0;
        int summ=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0) summ-=1;
            else summ+=1;
            pref[i+1]=summ;
        }
        unordered_map<int,int> mp;
        int res=0;
        for(int i=0;i<n+1;i++) {
            if(!mp.count(pref[i])) mp[pref[i]]=i;
            else {
                res=max(res,i-mp[pref[i]]);
                // mp[pref[i]]=i;
            }
        }
        // for(int i=n;i>=0;i--) if(!mp2.count(pref[i])) mp2[pref[i]]=i;
        // for(int i=0;i<n+1;i++) {
        //     res=max(res,mp2[pref[i]]-mp1[pref[i]]);
        // }
        return res;
    }
};