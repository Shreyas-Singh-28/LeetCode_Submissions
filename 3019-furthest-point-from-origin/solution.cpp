class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,under=0;
        for(auto &x:moves) {
            if(x=='L') l++;
            else if(x=='R') r++;
            else under++;
        }
        return abs(l-r)+under;
    }
};
