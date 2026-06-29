class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows=static_cast<int>(mat.size());
        int cols=static_cast<int>(mat[0].size());
        for(int i=rows-2;i>=0;i--) {
            int y=0;
            int x=i;
            vector<int> temp;
            while(x<rows && y<cols) {
                temp.push_back(mat[x++][y++]);
            }
            sort(temp.begin(),temp.end());
            y=0,x=i;
            while(x<rows && y<cols) {
                mat[x][y]=temp[y];
                x++;
                y++;
            }
        }
        for(int i=1;i<cols-1;i++) {
            int x=0;
            int y=i;
            vector<int> temp;
            while(y<cols && x<rows) {
                temp.push_back(mat[x++][y++]);
            }
            sort(temp.begin(),temp.end());
            x=0,y=i;
            while(y<cols && x<rows) {
                mat[x][y]=temp[x];
                x++;
                y++;
            }
        }
        return mat;
    }
};
