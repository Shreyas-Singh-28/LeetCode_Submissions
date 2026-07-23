class Solution {
public:
    string mergeCharacters(string s, int k) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++) {
            int len=ans.length();
            bool can_add=1;
            for(int j=len-1;j>=max(0,len-k);j--) {
                if(ans[j]==s[i]) {
                    can_add=0;
                    break;
                }
            }
            if(can_add) ans+=s[i];
        }
        return ans;
    }
};
