class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(const auto &x:strs) {
            string word_sorted=x;
            sort(word_sorted.begin(),word_sorted.end());
            m[word_sorted].push_back(x);
        }
        vector<vector<string>> res;
        for(auto &x:m) {
            res.push_back(x.second);
        }
        return res;
    }
};
