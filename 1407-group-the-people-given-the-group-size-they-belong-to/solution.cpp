class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
        //1333333
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> mp;
        int n=static_cast<int>(group.size());
        for(int i=0;i<n;i++) {
            mp[group[i]].push_back(i);
        }
        // for(auto &[key,vec]:mp) {
        //     for(int &y:vec) cout<<y<<' ';
        // }
        for(auto &[key,vec]:mp) {
            int elements=(int)vec.size();
            int i=0;
            while(elements>0) {
                vector<int> temp(vec.begin()+i,vec.begin()+i+key);
                ans.push_back(temp);
                i+=key;
                elements-=key;
            }
        }
        return ans;
    }
};
