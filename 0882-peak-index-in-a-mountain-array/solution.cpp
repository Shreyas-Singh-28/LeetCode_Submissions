class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        int peak=INT_MIN;
        while(l<r) {
            int mid=l+(r-l)/2;
            if(arr[mid]<=arr[mid+1]) {
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return l;
    }
};
