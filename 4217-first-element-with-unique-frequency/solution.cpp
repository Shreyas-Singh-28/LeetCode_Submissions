class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq,m;
        for(auto &num:nums) freq[num]++;
        for(auto &x:freq) m[x.second]++;
        for(auto &num:nums) {
            if(m[freq[num]]==1) return num;
        }
        return -1;
    }
};
