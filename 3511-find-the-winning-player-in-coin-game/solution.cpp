class Solution {
public:
    string winningPlayer(int x, int y) {
        int i=0;
        while(x>0 && y>3) {
            if(i==0) i=1;
            else i=0;
            x-=1;y-=4;
        }
    return i?"Alice":"Bob";
    }
};
