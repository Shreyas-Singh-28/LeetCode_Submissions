class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=static_cast<int>(nums.size());
        unordered_map<int,int> freq;
        for(int &ele:nums) freq[ele]++;
        int res=-1;
        if(k==1) {
            //check every element
            for(int &x:nums) {
                if(freq[x]==1) res=max(res,x);
            }
        }
        else if(n==k) {
            for(int &x:nums) {
                res=max(res,x);
            }
        }
        else {
            //check ends
            if(freq[nums[0]]==1) res=max(res,nums[0]);
            if(freq[nums[n-1]]==1) res=max(res,nums[n-1]);
        }
        return res;
    }
};