class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n);
        int k=0;
        for(int i=0;i<n;i++) {
            res[k++]=nums[i];
            res[k++]=nums[i+n];
        }
        return res;
    }
};
