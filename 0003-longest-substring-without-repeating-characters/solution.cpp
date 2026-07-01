class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n=s.length();
        int res=0;
        int temp=0;
        int l=0;
        for(int i=0;i<n;i++) {
            if(!st.count(s[i])) {
                st.insert(s[i]);
                temp++;
            }
            else{
                res=max(res,temp);
                while(st.count(s[i])) {
                    st.erase(s[l++]);
                    temp--;
                }
                temp++;
                st.insert(s[i]);
            }
        }
        return max(res,temp);
    }
};
