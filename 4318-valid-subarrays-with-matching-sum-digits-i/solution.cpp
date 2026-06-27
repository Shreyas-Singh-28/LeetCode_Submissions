class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int res=0;
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            long long runn=0;
            for(int j=i;j<n;j++) {
                runn+=nums[j];
                if(runn%10==x && (to_string(runn)[0]==to_string(x)[0])) res++;
            }
        }
        return res;
    }
};
