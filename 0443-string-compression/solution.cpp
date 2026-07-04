class Solution {
public:
    int compress(vector<char>& chars) {
        int n=static_cast<int>(chars.size());
        int res=0;
        int ind=-1;
        for(int i=0;i<n;i++) {
            int cnt=1;
            ind++;
            chars[ind]=chars[i];
            while(i+1<n && chars[i]==chars[i+1]) {
                i++;
                cnt++;
            }
            if(cnt>1) {
                string temp=to_string(cnt);
                for(char &ch:temp) {
                    chars[++ind]=ch;
                    res++;
                }
            }
            res+=1;
        }
        return res;
    }
};
