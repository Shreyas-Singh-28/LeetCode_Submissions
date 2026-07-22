class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        // stack<char> st;
        string res="";
        int temp=0;
        int start=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='(') temp++;
            if(s[i]==')') temp--;
            if(temp==0) {
                res+=string(s.begin()+start+1,s.begin()+i);
                start=i+1;
            }
        }
        return res;
    }
};
