class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=static_cast<int>(points.size());
        priority_queue<pair<int,pair<int,int>>> pq;
        // int cur_size=0;
        for(auto &duo:points) {
            int x=duo[0];
            int y=duo[1];
            int dist=x*x+y*y;
            pq.push({dist,{x,y}});
            if((int)pq.size()>k) {
                pq.pop();
            }
        }
        vector<vector<int>> res;
        while(!pq.empty()) {
            res.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return res;
    }
};
