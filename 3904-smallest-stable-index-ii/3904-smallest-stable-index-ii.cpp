class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=static_cast<int>(nums.size());
        int ans=-1;
        int maxx=INT_MIN;
        int minn=INT_MAX;
        vector<int> max_vec(n);
        vector<int> min_vec(n);
        for(int i=0;i<n;i++) {
            maxx=max(maxx,nums[i]);
            max_vec[i]=maxx;
        }
        for(int i=n-1;i>=0;i--) {
            minn=min(minn,nums[i]);
            min_vec[i]=minn;
        }
        for(int i=0;i<n;i++) {
            if(max_vec[i]-min_vec[i]<=k) return i;
        }
        return -1;
    }
};