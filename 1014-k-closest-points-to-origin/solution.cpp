class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=static_cast<int>(points.size());
        // vector<pair<double,pair<int,int>>> dist;
        priority_queue<pair<int,pair<int,int>>> pq;
        int cur_size=0;
        for(auto &duo:points) {
            int x=duo[0];
            int y=duo[1];
            int dist=x*x+y*y;
            // dist.push_back({(x*x+y*y),{x,y}});
            if(cur_size<k) {
                pq.push({dist,{x,y}});
                cur_size++;
            }
            else{
                if(dist<pq.top().first) {
                    pq.pop();
                    pq.push({dist,{x,y}});
                }
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
