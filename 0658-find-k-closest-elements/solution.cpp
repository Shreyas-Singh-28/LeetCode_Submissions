class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=static_cast<int>(arr.size());
        int l=0,r=n-1;
        while(r-l+1>k) {
            if(abs(arr[l]-x)<=abs(arr[r]-x)) r--;
            else l++;
        }
        return vector(arr.begin()+l,arr.begin()+l+k);
    }
};
