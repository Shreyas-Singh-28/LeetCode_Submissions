class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& intervals, int freeStart, int freeEnd) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        int n=static_cast<int>(intervals.size());
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<n;i++) {
            if(intervals[i][0]<=end+1) {
                end=max(intervals[i][1],end);
            }
            else{
                res.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        res.push_back({start,end});
        n=static_cast<int>(res.size());
        for(auto &x:res) cout<<x[0]<<" "<<x[1]<<'\n';
        vector<vector<int>> ans;
        for(int i=0;i<n;i++) {
            if((freeStart<=res[i][0] && freeEnd>=res[i][1]) || (freeStart==res[i][0] && freeEnd==res[i][1])) {
                // res.erase(res.begin()+i);
                // i--;
                continue;
            }
            else if(freeStart>=res[i][0] && freeEnd<=res[i][1]) {
                if(freeStart==res[i][0]) {
                    ans.push_back({freeEnd+1,res[i][1]});
                    // res[i][0]=freeEnd+1;
                }
                else if(freeEnd==res[i][1]) {
                    ans.push_back({res[i][0],freeStart-1});
                    // res[i][1]=freeStart-1;
                }
                else {
                    ans.push_back({res[i][0],freeStart-1});
                    ans.push_back({freeEnd+1,res[i][1]});
                    // res.insert(res.begin()+i+1, {freeEnd+1,res[i][1]});
                    // res[i][1]=freeStart-1;
                }
            }
            else if(freeStart>=res[i][0] && freeStart<=res[i][1]) {
                ans.push_back({res[i][0],freeStart-1});
                // res[i][1]=freeStart-1;
            }
            else if(freeEnd<=res[i][1] && freeEnd>=res[i][0]) {
                ans.push_back({freeEnd+1,res[i][1]});
                // res[i][0]=freeEnd+1;
            }
            else {
                ans.push_back(res[i]);
            }
        }
        // 2,8 10,12 14,16
        return ans;
    }
};
