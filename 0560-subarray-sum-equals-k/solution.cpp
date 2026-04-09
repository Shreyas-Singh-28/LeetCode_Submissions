class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefix=0;
        int res{0};
        unordered_map<int,int> freq;
        freq[0]=1;
        for(int i=0;i<n;i++) {
            prefix+=nums[i];
            int x=prefix-k;
            if(freq.count(x)) res+=freq[x];
            freq[prefix]++;
        }
        return res;
    }
};
