class Solution {
  public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n=static_cast<int>(arr.size());
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--) {
            while(!s.empty() && arr[i%n]>=s.top()) {
                s.pop();
            }
            if(!s.empty() && i<n) {
                ans[i]=s.top();
            }
            s.push(arr[i%n]);
        }
        return ans;
    }
};
