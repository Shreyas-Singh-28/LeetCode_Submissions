class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int res=0;
        int n=static_cast<int>(arr.size());
        long long a=0,b;
        for(int i=0;i<n;i++) {
            a=arr[i];
            for(int j=i+1;j<n;j++) {
                a=a^arr[j];
                if(a==0) res+=(j-i);
            }
        }
        return res;
        // 011 012 013 014 022 023 024 033 034 044
    }
};
