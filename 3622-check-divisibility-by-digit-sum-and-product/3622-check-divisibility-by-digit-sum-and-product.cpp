class Solution {
public:
    int summ_prod(int n) {
        int res=0;
        int prod=1;
        while(n>0) {
            int r=n%10;
            prod*=r;
            res+=r;
            n/=10;
        }
        return res+prod;
    }

    bool checkDivisibility(int n) {
        int res=summ_prod(n);
        if(n%res==0) return true;
        return false;
    }
};