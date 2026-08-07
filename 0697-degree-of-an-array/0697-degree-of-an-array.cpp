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
        // cout<<max_freq;
        for(auto &[key,val]:freq) {
            if(val==max_freq) {
                v.push_back(key);
            }
        }
        int len=(int)v.size();
        for(int i=0;i<len;i++) {
            int val=v[i];
            int ind1=-1,ind2=-1;
            for(int j=0;j<n;j++) {
                if(val==nums[j]) {
                    ind1=j;
                    break;
                }
            }
            for(int j=n-1;j>=0;j--) {
                if(val==nums[j]) {
                    ind2=j;
                    break;
                }
            }
            ans=min(ans,ind2-ind1+1);
        }
        return ans;
    }
};