class Solution {
public:
    bool check(int x,vector<int>& piles, int h) {
        int n=piles.size();
        long long cnt=0;
        for(int i=0;i<n;i++) {
            if(piles[i]<=x) {
                cnt++;
            }
            else{
                cnt+=(piles[i]+x-1)/x;
            }
        }
        if(cnt<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(l<=r) {
            int mid=l+(r-l)/2;
            if(check(mid,piles,h)) {
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
