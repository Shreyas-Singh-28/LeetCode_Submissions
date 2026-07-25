class Solution {
public:
    int maxProduct(int n) {
        int l1=-1,l2=-1;
        while(n) {
            int r=n%10;
            if(r>l1) {
                l2=l1;
                l1=r;
            }
            else if(r<=l1 && r>l2) {
                l2=r;
            }
            n/=10;
        }
        return l1*l2;
    }
};
