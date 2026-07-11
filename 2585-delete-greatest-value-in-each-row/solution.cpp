class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int res=0;
        for(auto &vec:grid) sort(vec.begin(),vec.end(),greater<>());
        int rows=static_cast<int>(grid.size());
        int cols=static_cast<int>(grid[0].size());
        for(int i=0;i<cols;i++) {
            int temp=0;
            for(int j=0;j<rows;j++) {
                temp=max(temp,grid[j][i]);
            }
            res+=temp;
        }
        return res;
    }
};
