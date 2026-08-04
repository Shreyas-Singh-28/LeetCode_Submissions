class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx=*max_element(nums.begin(),nums.end());
        int minn=*min_element(nums.begin(),nums.end());
        unordered_set<int> s;
        vector<int> res;
        for(auto &ele:nums) if(!s.count(ele)) s.insert(ele);
        for(int i=minn+1;i<maxx;i++) {
            if(!s.count(i)) res.push_back(i);
        }
        return res;
    }
};