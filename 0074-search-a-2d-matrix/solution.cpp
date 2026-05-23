class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int l=0,h=rows-1;
        int row=-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][cols-1]) {
                row=mid;
                break;
            }
            else if(target<matrix[mid][0]) {
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(row==-1) return false;
        l=0,h=cols-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(target==matrix[row][mid]) {
                return true;
            }
            else if(target<matrix[row][mid]) {
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};
