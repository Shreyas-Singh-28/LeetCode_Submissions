class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=static_cast<int>(nums.size());
        int l=0;
        int r=-1;
        vector<int> ans;
        // 123 456
        // -2-1012 -10123 01234
        for(int i=0;i<n;i++) {
            if(nums[i]==key) {
                l=max(i-k,r+1);
                r=min(n-1,i+k);
                for(int j=l;j<=r;j++) {
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
