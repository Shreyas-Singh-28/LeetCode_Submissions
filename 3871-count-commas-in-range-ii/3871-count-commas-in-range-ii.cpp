class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long i=1000;
        long long res=0;
        if(n>=i) {
            res+=(1*(min(n,1000*i-1)-i+1));
            i*=1000;
        }
        if(n>=i) {
            res+=(2*(min(n,1000*i-1)-i+1));
            i*=1000;
        }
        if(n>=i) {
            res+=(3*(min(n,1000*i-1)-i+1));
            i*=1000;
        }
        if(n>=i) {
            res+=(4*(min(n,1000*i-1)-i+1));
            i*=1000;
        }
        if(n>=i) {
            res+=(5*(min(n,1000*i-1)-i+1));
            i*=1000;
        }
        return res;
    }
};