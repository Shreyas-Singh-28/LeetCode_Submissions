class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.length();
        vector<int> freq(26,0);
        for(auto ch:s) {
            int ind=ch-'a';
            if(freq[ind]==1) return ch;
            freq[ind]++;
        }
        return ' ';
    }
};
