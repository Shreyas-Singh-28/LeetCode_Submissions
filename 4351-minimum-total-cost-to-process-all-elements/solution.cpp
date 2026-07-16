class Solution {
public:
    long long MOD=1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        long long cost=0;
        int k_copy=k;
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            if(k_copy>=nums[i]) {
                k_copy-=nums[i];
            }
            else{
                int todo=nums[i]-k_copy;
                int times=(todo+k-1)/k;
                cost+=times;
                k_copy+=(times*k-nums[i]);
            }
        }
        long long res;
        if(cost%2==0) {
            res=((cost/2)%MOD)*((cost+1)%MOD);
        }
        else{
            res=(cost%MOD)*(((cost+1)/2)%MOD);
        }
        return res%MOD;
    }
};
