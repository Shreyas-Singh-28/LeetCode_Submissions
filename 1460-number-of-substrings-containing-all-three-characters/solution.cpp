class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int res=0;
        vector<int> lastSeen = {-1,-1,-1};
        for(int i=0;i<n;i++) {
            lastSeen[s[i]-'a']=i;
            res+=(1+min({lastSeen[0],lastSeen[1],lastSeen[2]}));
        }
        return res;
    }
};
