class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=0;
        // int dup=1;
        int n=nums.size();
        for(int i=1;i<n;i++) {
            if(nums[ind]!=nums[i]) {
                ind++;
                nums[ind]=nums[i];
            }
        }
        return ind+1;
    }
};
