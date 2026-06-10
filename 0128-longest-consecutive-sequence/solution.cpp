class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0; 
        unordered_set<int> s(nums.begin(),nums.end());
        int res=1;
        for(int num:s) {
            if(s.count(num-1)) continue;
            int temp=1;
            while(s.count(num+1)) {
                temp++;
                num++;
            }
            res=max(temp,res);
        }
        return res;
    }
};
