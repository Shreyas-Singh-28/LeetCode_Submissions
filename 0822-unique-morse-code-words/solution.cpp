class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        int n=static_cast<int>(words.size());
        for(string &s:words) {
            int len=s.length();
            string building="";
            for(int i=0;i<len;i++) {
                building+=(morse[s[i]-'a']);
            }
            st.insert(building);
        }
        return (int)st.size();
    }
};
