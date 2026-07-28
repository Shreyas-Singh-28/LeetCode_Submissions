class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        vector<int> a(26,0);
        for(char &ch:s) {
            a[ch-'a']++;
        }
        string ans="";
        for(int i=0;i<26;i++) {
            while(a[i]>=2) {
                ans+=(i+'a');
                a[i]-=2;
            }
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        string mid="";
        for(int i=0;i<26;i++) {
            if(a[i]) {
                mid+=(i+'a');
            }
        }
        return ans+mid+rev;
    }
};
