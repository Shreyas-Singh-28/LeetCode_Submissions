class Solution {
public:
    int sumofd(int n) {
        int sum{};
        while(n) {
            sum=sum+n%10;
            n/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        vector<int> v(37,0);
        for(int i=1;i<=n;i++) {
            int sum=sumofd(i);
            v[sum]++;
        }
        int c=*max_element(v.begin(),v.end());
        return count(v.begin(), v.end(), c);
        return c;
    }
};
