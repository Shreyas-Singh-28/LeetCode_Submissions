class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        // vector<vector<int>> res;
        int k=0,n=intervals.size();
        // int l=intervals[0][0],r=intervals[0][1];
        for(int i=0;i<n-1;i++) {
            if(intervals[k][1]>=intervals[i+1][0]) {
                // intervals[i][0]=
                intervals[k][1]=max(intervals[k][1],intervals[i+1][1]);
            }
            else{
                k++;
                intervals[k][0]=intervals[i+1][0];
                intervals[k][1]=intervals[i+1][1];
            }
        }
        // for(int i=0;i<=k;i++) {
        //     res.push_back(intervals[i]);
        // }
        for(int i=0;i<n-k-1;i++) {
            intervals.pop_back();
        }
        // return res;
        // cout<<n<<' '<<k;
        return intervals;
    }
};
