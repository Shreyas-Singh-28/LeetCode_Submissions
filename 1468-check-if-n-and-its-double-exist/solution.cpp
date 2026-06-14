class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                //2 3 5 10
                if(arr[i]==(arr[j]*2) || arr[j]==(arr[i]*2)) return true;
            }
        }
        return false;
    }
};
