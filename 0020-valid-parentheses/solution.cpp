class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(auto &ch:s) {
            if(ch=='[' || ch=='{' || ch=='(') {
                a.push(ch);
            }
            else{
                if(a.empty()) return false;
                char t=a.top();
                if(t=='[' && ch!=']') return false;
                else if(t=='{' && ch!='}') return false;
                else if(t=='(' && ch!=')') return false;
                a.pop();
            }
        }
        return a.empty();
    }
};
