class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto &[key,freq]:m) {
            pq.push({freq,key});
            if((int)pq.size()>k) pq.pop();
        }
        vector<int> ans(k);
        for(int i=0;i<k;i++) {
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
