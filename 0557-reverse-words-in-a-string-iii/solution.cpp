class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int l=0,r=0;
        for(;r<n;r++) {
            if(s[r]==' ') {
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
        }
        reverse(s.begin()+l,s.begin()+r);
        return s;
    }
};
