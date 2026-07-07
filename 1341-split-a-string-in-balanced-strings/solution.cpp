class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0;
        int temp=0;
        int n=s.length();
        for(int i=0;i<n;i++) {
            if(s[i]=='L') temp--;
            else temp++;
            if(temp==0) res++;
        }
        return res;
    }
};
