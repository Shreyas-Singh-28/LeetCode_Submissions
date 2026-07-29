class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=static_cast<int>(arr.size());
        vector<int> ans(n,0);
        stack<int> s;
        for(int i=n-1;i>=0;i--) {
            while(!s.empty() && arr[i]>=arr[s.top()]) {
                s.pop();
            }
            if(!s.empty()) {
                ans[i]=s.top()-i;
            }
            s.push(i);
        }
        return ans;
    }
};
