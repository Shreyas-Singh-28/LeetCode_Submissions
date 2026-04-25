class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int res=1;
        int n=points.size();
        sort(points.begin(),points.end());
        int last=points[0][1];
        int first=points[0][0];
        // cout<<first<<' '<<last<<'\n';
        for(int i=0;i<n-1;i++) {
            if(last>=points[i+1][0] && first<=points[i+1][0]) {
                last=min(last,points[i+1][1]);
                first=max(first,points[i+1][0]);
                // cout<<"after updating: "<<first<<" "<<last<<'\n';
            }
            else{
                res++;
                last=points[i+1][1];
                first=points[i+1][0];
                // cout<<"after updating: "<<res<<" "<<first<<" "<<last<<'\n';
            }
        }
        return res;
    }
};
