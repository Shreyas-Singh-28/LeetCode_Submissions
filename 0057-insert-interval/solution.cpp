class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // vector<vector<int>> res;
        int n=intervals.size()+1;
        // if(n==0) {
        //     intervals.push_back(newInterval);
        //     return intervals;
        // }
        // int k=0;
        // int merge=0;
        // for(int i=0;i<n;i++) {
        //     if(newInterval[0]<=intervals[i][1]) {
        //         intervals[i][1]=max(intervals[i][0],newInterval[1]);
        //         merge=1;
        //         break;
        //     }
        // }
        int k=0;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n-1;i++) {
            if(intervals[k][1]>=intervals[i+1][0]) {
                intervals[k][1]=max(intervals[k][1],intervals[i+1][1]);
            }
            else{
                k++;
                intervals[k][0]=intervals[i+1][0];
                intervals[k][1]=intervals[i+1][1];
            }
        }
        for(int i=0;i<n-k-1;i++) {
            intervals.pop_back();
        }
        return intervals;
    }
};
