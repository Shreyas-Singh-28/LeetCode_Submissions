class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        n-=1;
        long long plus=(n+1)/2;
        long long minus=n/2;
        return (n%2==0)?s+1LL*plus*m-minus+1:s+1LL*plus*m-minus;
    }
};
