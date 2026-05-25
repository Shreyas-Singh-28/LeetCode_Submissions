class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long long l=1,r=x;
        long long ans=-1;
        while(l<=r) {
            long long mid=l+(r-l)/2;
            long long mid_sq=mid*mid;
            if(mid_sq<=x) {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};
