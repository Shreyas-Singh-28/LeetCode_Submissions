class SmallestInfiniteSet {
public:
    int curr;
    priority_queue<int,vector<int>,greater<int>> pq;
    unordered_set<int> s;

    SmallestInfiniteSet() {
        curr=1;
    }
    
    int popSmallest() {
        if(!pq.empty()) {
            int ele=pq.top();
            s.erase(ele);
            pq.pop();
            return ele;
        }
        return curr++;
    }
    
    void addBack(int num) {
        if(num>=curr) return;
        if(!s.count(num)) {
            pq.push(num);
            s.insert(num);
        }
    }
    //  2 3 4 5...
    //  curr=2
    // minheap = 1
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
