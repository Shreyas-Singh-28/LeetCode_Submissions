class Solution {
public:
    string reverseParentheses(string s) {
        while(true) {
            bool ok=0;
            int ind1=-1;
            int ind2=-1;
            for(int i=0;i<s.length();i++) {
                if(s[i]=='(') {
                    ind1=i;
                }
                else if(s[i]==')') {
                    ind2=i;
                    ok=1;
                    break;
                }
            }
            if(!ok) break;
            reverse(s.begin()+ind1+1,s.begin()+ind2);
            s.erase(s.begin()+ind1);
            s.erase(s.begin()+ind2-1);
        }
        return s;
    }
};