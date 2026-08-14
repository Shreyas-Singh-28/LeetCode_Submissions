class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int l=0;
        int res=1;
        unordered_map<char,int> mp;
        for(int r=0;r<n;r++) {
            mp[s[r]]++;
            while(mp[s[r]]>2) {
                mp[s[l++]]--;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};