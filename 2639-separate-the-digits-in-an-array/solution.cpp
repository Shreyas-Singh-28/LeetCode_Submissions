class Solution {
public:
    vector<int> separateDigits(vector<int>& a) {
        int n=a.size();
        vector<int> ans;
        stack<int>st;
        for(int i=0;i<n;i++) {
            int ele=a[i];
            while(ele>0) {
                int r=ele%10;
                st.push(r);
                ele/=10;
            }
            while(!st.empty()) {
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};
