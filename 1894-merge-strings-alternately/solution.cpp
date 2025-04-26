class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int k=0;
        char* ptr1=&word1[0];
        char* ptr2=&word2[0];
        int in=min(word1.length(),word2.length());
        int incopy=in;
        for(int i=0;i<in;i++) {
            result+=*ptr1++;
            result+=*ptr2++;
        }
        while(in<word1.length())
            result+=word1[in++];
        while(incopy<word2.length())
            result+=word2[incopy++];
        return result;
    }
};
