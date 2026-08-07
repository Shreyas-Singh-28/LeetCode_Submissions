class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=static_cast<int>(nums.size());
        for(int &x:nums) freq[x]++;
        int max_freq=0;
        int ans=50000;
        vector<int> v;
        for(auto &[key,val]:freq) {
            if(val>max_freq) {
                max_freq=val;
            }
        }
        for(auto &[key,val]:freq) {
            if(val==max_freq) {
                v.push_back(key);
            }
        }
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i=0;i<n;i++) {
            if(!mp1.count(nums[i])) {
                mp1[nums[i]]=i;
            }
        }
        for(int i=n-1;i>=0;i--) {
            if(!mp2.count(nums[i])) {
                mp2[nums[i]]=i;
            }
        }
        int len=(int)v.size();
        for(int i=0;i<len;i++) {
            int len=mp2[v[i]]-mp1[v[i]];
            ans=min(ans,len+1);
        }
        return ans;
    }
};