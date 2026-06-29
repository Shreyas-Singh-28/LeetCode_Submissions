class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=int(piles.size())/3;
        int res=0;
        for(int i=(int)piles.size()-2;n>0;i-=2,n--) {
            res+=piles[i];
        }
        return res;
    }
};
