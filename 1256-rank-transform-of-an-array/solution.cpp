class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        int n=static_cast<int>(arr.size());
        for(int &num:arr) {
            mp[num]=1;
        }
        int cnt=1;
        for(auto &[key,value]:mp) value=cnt++;
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            ans[i]=mp[arr[i]];
        } 
        return ans;
    }
};
