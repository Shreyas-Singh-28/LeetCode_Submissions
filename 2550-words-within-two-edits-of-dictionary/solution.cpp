class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;
        int n=queries[0].length();
        for(auto &a:queries) {
            for(auto &b:dictionary) {
                int c=0;
                for(int k=0;k<n;k++) {
                    if(a[k]!=b[k]) c++;
                }
                if(c<=2) {
                    res.push_back(a);
                    break;
                }
            }
        }
        return res;
    }
};
