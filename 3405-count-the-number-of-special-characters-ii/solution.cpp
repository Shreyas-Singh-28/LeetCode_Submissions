class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower_last_index(26,-1);
        vector<int> upper_first_index(26,-1);
        int n=static_cast<int>(word.size());
        for(int i=0;i<n;i++) {
            if(islower(word[i])) lower_last_index[word[i]-'a']=i;
            else if(upper_first_index[word[i]-'A']==-1) upper_first_index[word[i]-'A']=i;
        }
        int res=0;
        for(int i=0;i<26;i++) {
            if(lower_last_index[i]!=-1 && upper_first_index[i]!=-1 && lower_last_index[i]<upper_first_index[i]) res++; 
        }
        return res;
    }
};
