class Solution {
public:
    int mirrorReflection(int p, int q) {
        int lcm=(p*q)/__gcd(p,q);
        int turns=lcm/q;
        if((turns%2)==0) return 2;
        else{
            if((lcm/p)%2==0) return 0;
            else return 1;
        }
    }
};
