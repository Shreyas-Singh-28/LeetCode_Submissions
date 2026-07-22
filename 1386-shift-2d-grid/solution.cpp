class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=static_cast<int>(grid.size());
        int cols=static_cast<int>(grid[0].size());
        while(k--) {
            int ele=grid[rows-1][cols-1];
            for(int i=rows-1;i>=0;i--) {
                for(int j=cols-1;j>=0;j--) {
                    if(j==(cols-1) && i!=(rows-1)) {
                        grid[i+1][0]=grid[i][j];
                    }
                    else if(i==(rows-1) && j==(cols-1)) {
                        continue;
                    }
                    else {
                        grid[i][j+1]=grid[i][j];
                    }
                }
            }
            grid[0][0]=ele;
        }
        return grid;
    }
};
