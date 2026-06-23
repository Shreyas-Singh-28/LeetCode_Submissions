class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=static_cast<int>(words.size());
        vector<int> ans(n);
        int pref=0;
        unordered_set<char> s={'a','e','i','o','u'};
        for(int i=0;i<n;i++) {
            if(s.find(words[i][0])!=s.end() && s.find(words[i][words[i].length()-1])!=s.end()) pref++;
            ans[i]=pref;
        }
        vector<int> res;
        int len=(int)queries.size();
        for(int i=0;i<len;i++) {
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0) res.push_back(ans[r]);
            else res.push_back(ans[r]-ans[l-1]);
        }
        return res;
    }
};
