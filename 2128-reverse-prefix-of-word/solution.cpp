class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=-1;
        int n=static_cast<int>(word.length());
        for(int i=0;i<n;i++) {
            if(word[i]==ch) {
                ind=i;
                break;
            }
        }
        if(ind==-1) return word;
        reverse(word.begin(),word.begin()+ind+1);
        return word;
    }
};
