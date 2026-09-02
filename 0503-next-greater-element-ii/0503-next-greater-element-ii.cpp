class Solution {
    // 1 2 3
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        stack<int> st;
        for(int i=n-2;i>=0;i--) {
            while(!st.empty() && nums[i]>=st.top()) st.pop();
            st.push(nums[i]);
        }
        vector<int> res(n);
        for(int i=n-1;i>=0;i--) {
            while(!st.empty() && nums[i]>=st.top()) st.pop();
            if(st.empty()) res[i]=-1;
            else res[i]=st.top();
            st.push(nums[i]);
        }
        return res;
    }
};