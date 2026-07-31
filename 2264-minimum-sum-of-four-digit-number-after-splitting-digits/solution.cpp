class Solution {
public:
    int minimumSum(int num) {
        vector<int> dig(4);
        for(int i=0;i<4;i++) {
            dig[i]=num%10;
            num/=10;
        }
        sort(dig.begin(),dig.end());
        return (dig[0]*10+dig[2])+(dig[1]*10+dig[3]);
    }
};
