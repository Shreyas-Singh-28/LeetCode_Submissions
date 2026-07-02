class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int res=1;
        unordered_map<long long,int> mp;
        for(auto &ele:nums) mp[ele]++;
        if(mp.count(1)) res=max(res,(mp[1]%2==0)?mp[1]-1:mp[1]);
        for(auto &[key,value]:mp) {
            if(key==1) continue;
            int elements=0;
            long long temp=key;
            while(mp.count(temp) && mp[temp]>=2) {
                elements+=2;
                temp*=temp;
            }
            if(mp.count(temp) && mp[temp]==1) elements++;
            else elements--;
            res=max(res,elements);
        }
        return res;
    }
};
