class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
        vector<int> ans(n);
        int i=0;
        while(!pq.empty()) {
            ans[i++]=pq.top();
            pq.pop();
        }
        return ans;
    }
};
