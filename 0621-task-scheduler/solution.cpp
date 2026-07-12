class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        for(char &ch:tasks) {
            mp[ch]++;
        }
        int max_freq=INT_MIN;
        int unique=0;
        for(auto &[key,freq]:mp) {
            max_freq=max(max_freq,freq);
        }
        int res=0;
        for(auto &[key,freq]:mp) {
            if(max_freq==freq) res++;
        }
        return max((int)tasks.size(),res+(n+1)*(max_freq-1));
    }
};
