class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // smallest number will determine the odd/even parity of array
        int n=static_cast<int>(nums1.size());
        int even_small=INT_MAX;
        int odd_small=INT_MAX;
        int smallest=INT_MAX;
        for(int i=0;i<n;i++) {
            smallest=min(smallest, nums1[i]);
            if(nums1[i]%2==0) even_small=min(even_small, nums1[i]);
            else odd_small=min(odd_small, nums1[i]);
        }
        bool odd=(smallest==even_small?0:1);
        for(int i=0;i<n;i++) {
            if(odd) {
                if(nums1[i]%2==0) {
                    continue;
                }
                else {
                    continue;
                }
            }
            else {
                if(nums1[i]%2==1) {
                    return false;
                }
                else {
                    continue;
                }
            }
        }
        return true;
    }
};