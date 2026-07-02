class Solution {
public:
    bool check(const string &word) {
        int l=0,r=word.length()-1;
        while(l<r) {
            if(word[l]!=word[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string &word:words) {
            if(check(word)) return word;
        }
        return "";
    }
};
