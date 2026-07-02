class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=static_cast<int>(nums.size())-1;
        double res=50;
        while(l<r) {
            res=min(res,(double(nums[l]+nums[r])/2));
            l++;
            r--;
        }
        return res;
    }
};
