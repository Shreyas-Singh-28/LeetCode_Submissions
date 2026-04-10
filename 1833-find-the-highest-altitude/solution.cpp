class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // gain.insert(gain.begin(),0);
        // cout<<gain.size();
        // int hi=0;
        for(int i=1;i<gain.size();i++) gain[i]+=gain[i-1];
            // hi=max(hi,gain[i]);
        return max(0,*max_element(gain.begin(),gain.end())); 
    }
};
