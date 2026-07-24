class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        int res=0;
        int n=static_cast<int>(g.size());
        int len=static_cast<int>(s.size());
        for(int i=0;i<n;i++) {
            while(j<len && g[i]>s[j]) {
                j++;
            }
            if(j==len) break;
            j++;
            res++;
        }
        return res;
    }
};
