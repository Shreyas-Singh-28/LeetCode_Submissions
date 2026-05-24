class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_min=prices[0];
        int res=0;
        for(int price:prices) {
            curr_min=min(curr_min,price);
            res=max(res,price-curr_min);
        }
        return res;
    }
};
