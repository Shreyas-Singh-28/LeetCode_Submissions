class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        long long summin{},summax{},sum{};
        for(int &i:diff) {
            sum=sum+i;
            summax=max(summax,sum);
            summin=min(summin,sum);
        }
        int range=summax-summin;
        int c=upper-lower-range+1;
        return (c>0)?c:0;
    }
};
