class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        int arr[101]={0};
        for(int num:nums) if(num%2==0) arr[num]++;
        for(int num:nums) if(num%2==0 && arr[num]==1) return num;
        return -1;
    }
};
