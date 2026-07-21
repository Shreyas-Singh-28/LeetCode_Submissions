class Solution {
public:
    // from chatgpt - understand comp.
    struct cmp {
        bool operator()(const pair<int,string>& a,
                        const pair<int,string>& b) const {
            if(a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        }

    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(string &s:words) mp[s]++;
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        for(auto &[str,freq]:mp) {
            pq.push({freq,str});
            if((int)pq.size()>k) pq.pop();
        }

        vector<string> ans(k);
        while(!pq.empty()) {
            string word=pq.top().second;
            ans[--k]=word;
            pq.pop();
        }
        return ans;
    }
};
