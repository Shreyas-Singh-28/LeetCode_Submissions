class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        int i=0;
        int summ=nums[0];
        while(i+1<n && (nums[i+1]-nums[i])==1) {
            summ+=nums[i+1];
            i++;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
            if(summ<nums[i]) continue;
            else if(summ==nums[i]) {
                while(i+1<n && summ==nums[i]) {
                    i++;
                }
                summ++;
                i--;
            }
        }
        return summ;
    }
};