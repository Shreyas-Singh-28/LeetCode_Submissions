class Solution {
public:
    int maxDistinct(string s) {
        vector<int> letters(26);
        for(char &ch:s) {
            letters[ch-'a']=1;
        }
        int res=0;
        for(int i=0;i<26;i++) {
            if(letters[i]==1) res++;
        }
        return res;
    }
};
