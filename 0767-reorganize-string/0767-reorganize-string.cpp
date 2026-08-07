class Solution {
public:
    string reorganizeString(string s) {
        // maybe make a const array of 26 size representing freq of every char
        int n=s.length();
        vector<int> freq(26,0);
        char last=' ';
        string ans="";
        for(char &ch:s) freq[ch-'a']++;
        for(int i=0;i<n;i++) {
            char lett=' ';
            int max_freq=0;
            for(int j=0;j<26;j++) {
                if(char(j+'a')!=last && freq[j]>max_freq) {
                    lett=char(j+'a');
                    max_freq=freq[j];
                }
            }
            if(lett==' ') return "";
            ans+=lett;
            last=lett;
            freq[lett-'a']--;
        }
        return ans;
    }
};