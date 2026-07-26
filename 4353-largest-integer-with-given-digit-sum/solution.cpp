class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>(9*n)) return -1;
        if(s==0) return 0;
        string ans="";
        while(s>=9) {
            ans+='9';
            s-=9;
        }
        if(s>0) ans+=(s+'0');
        while(ans.length()<n) {
            ans+='0';
        }
        return stoi(ans);
    }
};
