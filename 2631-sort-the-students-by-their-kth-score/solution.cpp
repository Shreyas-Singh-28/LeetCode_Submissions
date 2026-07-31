class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int stud=static_cast<int>(score.size());
        int exam=static_cast<int>(score[0].size());
        vector<pair<int,vector<int>>> v;
        for(auto &vec:score) {
            v.push_back({vec[k],vec});
        }
        sort(v.begin(),v.end(),greater<>());
        vector<vector<int>> res;
        for(auto &[ind,vec]:v) {
            res.push_back(vec);
        }
        return res;
    }
};
