class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> m;
        stack<int> s;
        for(auto num:nums2) {
            while(!s.empty() && s.top()<num) {
                m[s.top()]=num;
                s.pop();
            }
            s.push(num);
        }
        // while(!s.empty()) {
        //     m[s.top()]=-1;
        //     s.pop();
        // }
        for(auto num:nums1) {
            ans.push_back(m.count(num)?m[num]:-1);
        }
        return ans;
    }
};
