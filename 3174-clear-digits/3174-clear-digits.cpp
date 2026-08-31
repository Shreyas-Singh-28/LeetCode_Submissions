class Solution {
public:
    // cb345a
    string clearDigits(string s) {
        stack<char> st;
        int n=s.length();
        for(int i=n-1;i>=0;i--) {
            if(!st.empty() && isalpha(s[i]) && isdigit(st.top())) st.pop();
            else st.push(s[i]);
        }
        string res="";
        while(!st.empty()) {
            char ch=st.top();
            res=res+ch;
            st.pop();
        }
        return res;
    }
};