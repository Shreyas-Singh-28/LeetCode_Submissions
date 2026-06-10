class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(auto &ch:s)freq[ch]++;
        vector<pair<int,char>> v;
        for(auto &[ch,frequency]:freq) v.push_back({frequency,ch});
        sort(v.begin(),v.end(),greater<>());
        string ans="";
        for(auto &[frequency,ch]:v) {
            while(frequency--) {
                ans+=ch;
            }
        }
        return ans;
    }
};
