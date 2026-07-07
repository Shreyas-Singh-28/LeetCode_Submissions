class Solution {
public:
    long long sumAndMultiply(int n) {
        long long res=0;
        int k=1;
        int digit_sum=0;
        while(n>0) {
            int r=n%10;
            if(r!=0) {
                digit_sum+=r;
                res=res+(r*k);
                k*=10;
            }
            n/=10;
        }
        return res*digit_sum;
    }
};
