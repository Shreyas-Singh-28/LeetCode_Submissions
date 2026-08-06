class Solution {
public:
    int smallestNumber(int n, int t) {
        int i=n;
        for(;i%10!=0;i++) {
            int prod=1;
            int ele=i;
            while(ele) {
                prod*=(ele%10);
                ele/=10;
            }
            if(prod%t==0) return i;
        }
        return i;
    }
};