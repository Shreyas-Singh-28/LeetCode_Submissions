class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        // 1 3 3 3 3 1 2 1 2 1
        // 2 3 3 3 3 2 1 2
        // 4 3 12 15 20 20 17 17 2
       
        int n=static_cast<int>(stones.size());
        vector<int> freq(3,0);
        for(int i=0;i<n;i++) {
            freq[stones[i]%3]++;
        }
        if(freq[1]==0 && freq[2]==0) return false;
        if(freq[0]%2==0) return freq[1]>0 && freq[2]>0;
        return abs(freq[1]-freq[2])>=3;
    }
};