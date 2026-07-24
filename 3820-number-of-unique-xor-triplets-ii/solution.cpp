class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        unordered_set<int> unique_ele(nums.begin(),nums.end());
        unordered_set<int> pair_xor;
        for(int x:unique_ele) {
            for(int y:unique_ele) {
                if(!pair_xor.count(x^y)) pair_xor.insert(x^y); 
            }
        }
        unordered_set<int> ans;
        for(int ele:pair_xor) {
            for(int z:unique_ele) {
                if(!ans.count(ele^z)) ans.insert(ele^z);
            }
        }
        return (int)ans.size();
    }
};
