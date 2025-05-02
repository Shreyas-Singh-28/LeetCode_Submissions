class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c{};
        for(int &i:nums) {
            // int dig{(nums[i]==0)?1:(int)log10(nums[i])+1};/
            if(((i==0)?1:(int)log10(i)+1)%2==0) c++;
        }
        return c;
    }
};
