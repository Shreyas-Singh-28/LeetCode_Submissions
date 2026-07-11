class KthLargest {
public:
    int k_val;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        k_val=k;
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++) {
            if((int)pq.size()<k) {
                pq.push(nums[i]);
            }
            else{
                if(nums[i]>pq.top()) {
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
    }
    
    int add(int val) {
        if((int)pq.size()<k_val) {
            pq.push(val);
        }
        else if(val>pq.top()) {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
