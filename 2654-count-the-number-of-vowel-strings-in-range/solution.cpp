class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int res=0;
        int n=static_cast<int>(words.size());
        unordered_set<char> s={'a','e','i','o','u'};
        for(int i=left;i<=right;i++) {
            if(s.find(words[i][0])!=s.end() && s.find(words[i][words[i].length()-1])!=s.end()) res++;
        }
        return res;
    }
};
