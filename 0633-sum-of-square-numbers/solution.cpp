class Solution {
public:
    bool judgeSquareSum(int c) {
        int l=0,r=sqrt(c);
        while(l<=r) {
            long long cur= 1LL*l*l + 1LL*r*r;
            if(cur==c) return true;
            else if(cur<c) l++;
            else r--;
        }
        return false;
    }
};
