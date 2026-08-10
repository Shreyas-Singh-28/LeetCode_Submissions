class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows=static_cast<int>(matrix.size());
        int cols=static_cast<int>(matrix[0].size());
        vector<int> temp(rows*cols);
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                temp[i*cols+j]=matrix[i][j];
            }
        }
        sort(temp.begin(),temp.end());
        return temp[k-1];
    }
};