class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        long long res=0;
        bool neg=0;
        for(;i<n;i++) {
            if(s[i]!=' ') break;
        }
        if(s[i]=='-') {
            neg=1;
            i++;
        }
        else if(s[i]=='+') i++;
        for(;i<n;i++) {
            if(s[i]!='0') break;
        }
        int start=i;
        for(;i<n;i++) {
            if(!(s[i]>='0' && s[i]<='9')) break;
        }
        for(int j=start;j<i;j++) {
            int digit=s[j]-'0';
            if(res*10+digit>INT_MAX) {
                return (neg==1?INT_MIN:INT_MAX);
            }
            res=res*10+digit;
        }
        return (neg==1?res*-1:res);
    }
};
