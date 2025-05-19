class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long one{},two{};
        long long c{};
        for(int i=0;i<nums1.size();i++) {
            if(nums1[i]==0) one++;
        }
        for(int i=0;i<nums2.size();i++) {
            if(nums2[i]==0) two++;
        }
        long long sum1=accumulate(nums1.begin(),nums1.end(),0LL);
        long long sum2=accumulate(nums2.begin(),nums2.end(),0LL);
        if(one!=0 && two!=0) {
            return ((sum1+one)>(sum2+two)?(sum1+one):(sum2+two));
        }
        if(one==0 && two==0) return sum1==sum2 ? sum1 : -1;
        if(sum2>=sum1) {
            if(one==0 || two!=0) return -1;
            if(sum2-sum1<one) return -1;
            else return sum2;
        }
        if(sum1>sum2) {
            if(two==0 || one!=0) return -1;
            if(sum1-sum2<two) return -1;
            else return sum1;
        }
        return -1;
    }
};
