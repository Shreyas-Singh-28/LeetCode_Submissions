class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=static_cast<int>(nums.size());
        vector<int> ans(n);
        int i=0;
        for(int num:nums) {
            if(num<pivot) ans[i++]=num;
        }
        for(int num:nums) {
            if(num==pivot) ans[i++]=num;
        }
        for(int num:nums) {
            if(num>pivot) ans[i++]=num;
        }
        return ans;
    }
};
