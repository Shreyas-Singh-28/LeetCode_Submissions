class Solution {
public:
    bool checkGoodInteger(int n) {
        int res=0;
        while(n) {
            int r=n%10;
            res+=(r*r-r);
            n/=10;
        }
        return res>=50;
    }
};
