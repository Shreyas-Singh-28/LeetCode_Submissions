class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        //mlogn -> to find number of 1's in each row
        int rows=(int)mat.size();
        int cols=(int)mat[0].size();
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<rows;i++) {
            int l=0,r=cols-1;
            int ans=-1;
            while(l<=r) {
                int mid=l+(r-l)/2;
                if(mat[i][mid]==1) {
                    ans=mid;
                    l=mid+1;
                }
                else r=mid-1;
            }
            pq.push({ans+1,i});
            if((int)pq.size()>k) pq.pop();
        }
        vector<int> ans(k);
        while(!pq.empty()) {
            ans[--k]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
