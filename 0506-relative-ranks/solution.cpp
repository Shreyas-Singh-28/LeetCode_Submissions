class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=static_cast<int>(score.size());
        vector<string> ans(n);
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0;i<n;i++) {
            maxHeap.push({score[i],i});
        }
        int curr=1;
        while(!maxHeap.empty()) {
            auto &[ele,ind]=maxHeap.top();
            if(curr==1) {
                ans[ind]="Gold Medal";
                maxHeap.pop();
                curr++;
            }
            else if(curr==2) {
                ans[ind]="Silver Medal";
                maxHeap.pop();
                curr++;
            }
            else if(curr==3) {
                ans[ind]="Bronze Medal";
                maxHeap.pop();
                curr++;
            }
            else{
                ans[ind]=to_string(curr);
                maxHeap.pop();
                curr++;
            }
        }
        return ans;
    }
};
