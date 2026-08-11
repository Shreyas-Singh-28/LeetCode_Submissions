class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        vector<int> freq = {a,b,c};
        string ans="";
        int last=-1;
        bool ok=1;
        // 3 8 19
        while(ok) {
            bool can=0;
            int ind=-1;
            int max_freq=0;
            int minn=min({freq[0],freq[1],freq[2]});
            int maxx=max({freq[0],freq[1],freq[2]});
            for(int i=0;i<3;i++) {
                if(freq[i]>max_freq and i!=last) {
                    ind=i;
                    max_freq=freq[i];
                    can=1;
                }
            }
            if(!can) break;
            ans+=('a'+ind);
            if(max_freq>=2 && maxx==freq[ind]) {
                ans+=('a'+ind);
                freq[ind]--;
            }
            freq[ind]--;
            last=ind;
        }
        return ans;
    }
};