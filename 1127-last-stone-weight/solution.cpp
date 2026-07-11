class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while((int)pq.size()>1) {
            int high1=pq.top();
            pq.pop();
            int high2=pq.top();
            pq.pop();
            if(high1!=high2) {
                pq.push(high1-high2);
            }
        }
        return ((int)pq.size()==0)?0:pq.top();
    }
};
