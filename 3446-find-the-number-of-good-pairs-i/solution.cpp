class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        for(int &num:nums2) {
            num*=k;
        }
        int res=0;
        for(int &num1:nums1) {
            for(int &num2:nums2) {
                if((num1%num2)==0) res++;
            }
        }
        return res;
    }
};
