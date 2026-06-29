class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        // 00 01 02
        // 10 11 12
        // 20 21 22
        int n=static_cast<int>(grid.size());
        for(int i=n-2;i>=0;i--) {
            int y=0;
            int x=i;
            vector<int> temp;
            while(x<n) {
                temp.push_back(grid[x++][y++]);
            }
            sort(temp.begin(),temp.end(),greater<int>());
            y=0,x=i;
            while(x<n) {
                grid[x][y]=temp[y];
                x++;
                y++;
            }
        }
        for(int i=1;i<n-1;i++) {
            int x=0;
            int y=i;
            vector<int> temp;
            while(y<n) {
                temp.push_back(grid[x++][y++]);
            }
            sort(temp.begin(),temp.end());
            x=0,y=i;
            while(y<n) {
                grid[x][y]=temp[x];
                x++;
                y++;
            }
        }
        return grid;
    }
};
