class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res=1;
        int n=static_cast<int>(arr.size());
        for(int i=1;i<n;i++) {
            if(arr[i]>res) res++;
        }
        return res;
    }
};
