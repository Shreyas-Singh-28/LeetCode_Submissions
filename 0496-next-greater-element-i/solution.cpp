class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n=static_cast<int>(nums2.size());
        int len=static_cast<int>(nums1.size());
        vector<int> ans(len);
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--) {
            while(!st.empty() && nums2[i]>=nums2[st.top()]) {
                st.pop();
            }
            if(!st.empty()) {
                // res[i]=st.top();
                mp[nums2[i]]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<len;i++) {
            if(mp.count(nums1[i])) {
                ans[i]=nums2[mp[nums1[i]]];
            }
            else ans[i]=-1;
        }
        return ans;
    }
};
