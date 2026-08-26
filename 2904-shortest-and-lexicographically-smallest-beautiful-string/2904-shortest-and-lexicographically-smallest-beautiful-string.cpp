class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.length();
        string ans="";
        vector<string> poss;
        int curr=0;
        int len=100;
        int l=-1;
        for(int r=0;r<n;r++) {
            if(s[r]=='1') {
                if(l==-1) l=r;
                curr++;
            }
            if(curr==k) {
                string now=s.substr(l,r-l+1);
                cout<<now<<' '<<ans<<' '<<l<<' '<<r<<' '<<'\n';
                if(ans=="" || ans.length()>now.length() || (ans.length()==now.length() && ans>now)) ans=now;
                l++;
                while(l<n && s[l]!='1') {
                    l++;
                }
                curr--;
            }
        }
        return ans;
    }
};