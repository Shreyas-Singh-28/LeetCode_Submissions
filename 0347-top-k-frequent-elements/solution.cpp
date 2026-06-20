class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        // {1:3, 2:2 ,3:1}
        vector<pair<int,int>> v;
        for(auto &ele:m) {
            v.push_back({ele.second,ele.first});
        }
        sort(v.begin(),v.end(),greater<>());
        // {3:1,2:2,1:3}
        vector<int> ans;
        for(int i=0;i<k;i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
