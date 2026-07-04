class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int res=INT_MAX;
        int rows=static_cast<int>(grid.size());
        int cols=static_cast<int>(grid[0].size());
        int temp=0;
        //for rows to be palindromic
        for(auto &vec:grid) {
            int l=0,r=cols-1;
            while(l<r) {
                if(vec[l]!=vec[r]) temp++;
                l++;
                r--;
            }
            // cout<<temp<<'\n';
        }
        res=min(res,temp);
        temp=0;
        //for columns to be palindrome
        for(int i=0;i<cols;i++) {
            int l=0,r=rows-1;
            while(l<r) {
                if(grid[l][i]!=grid[r][i]) temp++;
                l++;
                r--;
            }
            // cout<<temp<<'\n';
        }
        res=min(res,temp);
        return res;
    }
};
