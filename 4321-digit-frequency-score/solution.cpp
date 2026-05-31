class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> m;
        string s=to_string(n);
        int len=s.length();
        for(int i=0;i<len;i++) {
            m[s[i]-'0']++;
        }
        int res=0;
        for(auto &x:m) {
            res=res+(x.first*x.second);
        }
        return res;
    }
};
