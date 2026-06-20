class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> index(26);
        for(int i=0;i<order.length();i++) {
            index[order[i]-'a']=i;
        }
        int number_words=static_cast<int>(words.size());
        for(int i=0;i<number_words-1;i++) {
            int len1=words[i].length();
            int len2=words[i+1].length();
            int j=0;
            for(;j<min(len1,len2);j++) {
                if(index[words[i][j]-'a']>index[words[i+1][j]-'a']) return false;
                else if(index[words[i][j]-'a']<index[words[i+1][j]-'a']) break;
            }
            if(j==min(len1,len2) && len1>len2) return false;
        }
        return true;
    }
};
