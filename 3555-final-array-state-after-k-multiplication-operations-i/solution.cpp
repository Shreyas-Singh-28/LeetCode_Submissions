class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=static_cast<int>(nums.size());
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) {
            v.push_back({nums[i],i});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq(v.begin(),v.end());
        while(k--) {
            auto [num,ind]=pq.top();
            pq.pop();
            nums[ind]=num*multiplier;
            pq.push({num*multiplier,ind});
        }
        return nums;
    }
};
