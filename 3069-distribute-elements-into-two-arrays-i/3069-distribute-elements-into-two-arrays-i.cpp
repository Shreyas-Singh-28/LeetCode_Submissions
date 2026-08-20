class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        vector<int> a;
        vector<int> b;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        for(int i=2;i<n;i++) {
            if(a.back()>b.back()) {
                a.push_back(nums[i]);
            }
            else b.push_back(nums[i]);
        }
        vector<int> res(n);
        int i=0,j=0;
        int k=0;
        while(i<(int)a.size()) {
            res[k++]=a[i++];
        }
        while(j<(int)b.size()) {
            res[k++]=b[j++];
        }
        return res;
    }
};