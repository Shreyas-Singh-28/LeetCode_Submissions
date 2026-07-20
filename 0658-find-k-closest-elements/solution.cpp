// using pair<int,int> pi;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=static_cast<int>(arr.size());
        vector<pair<int,int>> v;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++) {
            pq.push({abs(arr[i]-x),arr[i]});
        }
        for(int i=k;i<n;i++) {
            pq.push({abs(arr[i]-x),arr[i]});
            pq.pop();
        }
        vector<int> ans(k);
        while(!pq.empty()) {
            ans[--k]=pq.top().second;
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
