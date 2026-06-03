class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> m;
        for(const auto &x:strs) {
            vector<int> a(26,0);
            // string word_sorted=x;
            // sort(word_sorted.begin(),word_sorted.end());
            int len=x.length();
            for(int i=0;i<len;i++) {
                a[x[i]-'a']++;
            }
            m[a].push_back(x);
        }
        vector<vector<string>> res;
        for(auto &x:m) {
            res.push_back(x.second);
        }
        return res;
    }
};
