class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int res=INT_MIN;
        int n=static_cast<int>(points.size());
        sort(points.begin(),points.end());
        for(int i=1;i<n;i++) {
            res=max(res,points[i][0]-points[i-1][0]);
        }
        return res;
    }
};
