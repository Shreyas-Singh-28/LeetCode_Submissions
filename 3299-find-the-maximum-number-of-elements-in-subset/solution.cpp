class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> mp;
        for(auto &ele:nums) mp[ele]++;

        int res=1;
        if(mp.count(1)) res=max(res,(mp[1]%2==0)?mp[1]-1:mp[1]);

        for(auto &[key,value]:mp) {
            if(key==1) continue;
            int elements=0;
            long long temp=key;
            for(;mp.count(temp) && mp[temp]>=2;temp*=temp) {
                elements+=2;
            }
            if(mp.count(temp)) elements++;
            else elements--;
            res=max(res,elements);
        }
        return res;
    }
};
