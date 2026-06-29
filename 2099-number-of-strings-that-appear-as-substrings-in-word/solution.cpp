class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int res=0;
        for(string &pattern:patterns) if(word.contains(pattern)) res++;
        return res;
    }
};
