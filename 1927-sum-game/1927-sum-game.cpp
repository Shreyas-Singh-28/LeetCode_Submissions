class Solution {
public:
    bool sumGame(string num) {
        int n=num.length();
        int lq=0,rq=0;
        int lsum=0,rsum=0;
        for(int i=0;i<n;i++) {
            if(i<n/2) {
                if(num[i]=='?') lq++;
                else lsum+=(num[i]-'0');
            }
            else {
                if(num[i]=='?') rq++;
                else rsum+=(num[i]-'0');
            }
        }
        if(abs(lq+rq)%2==1) return true;
        if((lsum-rsum) == ((rq-lq)/2)*9) return false;
        return true;
    }
};