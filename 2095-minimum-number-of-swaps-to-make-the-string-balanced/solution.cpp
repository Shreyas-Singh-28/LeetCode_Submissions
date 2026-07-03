class Solution {
public:
    int minSwaps(string s) {
        int n=static_cast<int>(s.length());
        int good=0;
        int res=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='[') good++;
            else {
                if(good==0) res++;
                else good--;
            }
        }
        return (res+1)/2;
    }
};
