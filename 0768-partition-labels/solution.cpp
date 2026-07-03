class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last(26);
        int n = static_cast<int>(s.length());
        for(int i=0;i<n;i++) {
            last[s[i]-'a']=i;
        }
        vector<int> ans;
        int end=0,temp=0;
        for(int i=0;i<n;i++) {
            temp=0;
            do {
                end=max(end,last[s[i]-'a']);
                temp++;
                i++;
            } while(i<=end);
            i=end;
            ans.push_back(temp);
        }
        return ans;
    }
};
