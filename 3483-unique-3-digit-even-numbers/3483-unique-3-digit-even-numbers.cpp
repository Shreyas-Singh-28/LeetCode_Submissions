class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=static_cast<int>(digits.size());
        unordered_set<int> st;
        for(int k=n-1;k>=0;k--) {
            if(digits[k]%2==0) {
                for(int j=n-1;j>=0;j--) {
                    if(k!=j) {
                        for(int i=n-1;i>=0;i--) {
                            if(i!=k && i!=j && digits[i]!=0) {
                                int num=digits[i]*100+digits[j]*10+digits[k];
                                st.insert(num);
                            }
                        }
                    }
                }
            }
        }
        return (int)st.size();
    }
};