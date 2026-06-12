class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length=INT_MAX;
        int n=strs.size();
        for(string &word: strs){
            min_length=min((int)word.length(),min_length);
        }
        string ans="";
        for(int i=0;i<min_length;i++) {
            bool ok=1;
            for(int j=1;j<n;j++) {
                if(strs[0][i]!=strs[j][i]) {
                    ok=0;
                    break;
                }
            }
            if(ok) {
                ans+=strs[0][i];
            }
            else break;
        }
        return ans;
    }
};
