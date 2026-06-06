class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if((n%groupSize)!=0) return false;
        unordered_map<int,int> freq;
        for(auto &ele:hand) freq[ele]++;
        sort(hand.begin(),hand.end());
        for(int i=0;i<n-groupSize+1;i++) {
            if(freq[hand[i]]==0) continue;
            bool ok=1;
            for(int j=1;j<groupSize;j++) {
                if(!(freq[hand[i]+j])) {
                    ok=0;
                    break;
                }
            }
            if(!ok) return false;
            if(ok) {
                for(int j=0;j<groupSize;j++) {
                    freq[hand[i]+j]--;
                }
            }
        }
        for(auto &[value, count]:freq) {
            if(count) return false;
        }
        return true;
    }
};
