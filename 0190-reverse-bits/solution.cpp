class Solution {
public:
    int reverseBits(int n) {
        vector<char> arr(32);
        int temp=n;
        int i=0;
        while(temp>0) {
            int r=temp%2;
            arr[i]=r+'0';
            temp/=2;
            i++;
        }
        for(;i<32;i++) {
            arr[i]='0';
        }
        int res=0;
        for(int i=0;i<32;i++) {
            res=res+(arr[i]-'0')*pow(2,31-i);
        }
        return res;
    }
};
