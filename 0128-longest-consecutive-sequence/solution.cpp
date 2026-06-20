class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return (int)nums.size(); 
        sort(nums.begin(),nums.end());
        int n=static_cast<int>(nums.size());
        int res=INT_MIN;
        for(int i=0;i<n-1;i++) {
            int temp=1;
            while(i<n-1 && nums[i+1]-nums[i]<=1) {
                if(nums[i+1]-nums[i]==1) {
                    temp++;
                }
                i++;
            }
            res=max(res,temp);
        }
        return res;
    }
};
