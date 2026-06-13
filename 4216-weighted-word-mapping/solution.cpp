class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string &word:words) {
            int sumweight=0;
            for(char &ch:word) {
                sumweight+=weights[ch-'a'];
            }
            sumweight%=26;
            char toadd='z'-sumweight;
            ans+=toadd;
        }
        return ans;
    }
};
