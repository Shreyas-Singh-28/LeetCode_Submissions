class Solution {
public:
    int maximumGap(string skill, string station) {
        int n=station.length();
        int len=skill.length();
        if(len==1) return 0;
        vector<int> left(len);
        vector<int> right(len);
        int j=0;
        for(int i=0;i<n && j<len;i++) {
            if(skill[j]==station[i]) {
                left[j++]=i;
            }
        }
        j=len-1;
        for(int i=n-1;i>=0 && j>=0;i--) {
            if(skill[j]==station[i]) {
                right[j--]=i;
            }
        }
        // for(int &x:left) cout<<x<<' ';
        // cout<<'\n';
        // for(int &x:right) cout<<x<<' ';
        // cout<<'\n';
        int res=0;
        for(int i=0;i<len-1;i++) {
            res=max(res,right[i+1]-left[i]);
        }
        return res;
    }
};