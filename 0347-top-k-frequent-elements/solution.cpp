class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;vector<int> ans(k);
        int i=0;
        for(auto &ele:m) {
            // {1:3, 2:2, 3:1}
            if(i<k) {
                pq.push({ele.second,ele.first});
            }
            else{
                int mn_freq=pq.top().first;
                if(ele.second>mn_freq) {
                    pq.pop();
                    pq.push({ele.second,ele.first});
                }
            }
            i++;
        }
        i=0;
        while(!pq.empty()) {
            ans[i++]=pq.top().second;
            pq.pop();
            // cout<<pq.top().first<<" "<<pq.top().second<<'\n';
            // pq.pop();
        }
        return ans;
    }
};
