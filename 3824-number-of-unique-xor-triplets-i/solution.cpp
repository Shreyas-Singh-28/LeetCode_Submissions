class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        if(n<=2) return n;
        return pow(2,static_cast<int>(log2(n)+1));
    }
};
