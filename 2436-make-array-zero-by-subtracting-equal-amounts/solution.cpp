class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        vector<int> freq(101);
        for(int &num:nums) freq[num]++;
        for(int i=1;i<=100;i++) {
            if(freq[i]) res++;
        }
        return res;
    }
};
