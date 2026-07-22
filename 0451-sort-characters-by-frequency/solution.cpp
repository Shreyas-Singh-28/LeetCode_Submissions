using pic = pair<int,char>;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto &ch:s) mp[ch]++;
        priority_queue<pic> pq;
        for(auto &[key,value]:mp) {
            pq.push({value,key});
        }
        string ans="";
        while(!pq.empty()) {
            int freq=pq.top().first;
            char ch=pq.top().second;
            while(freq--) {
                ans+=ch;
            }
            pq.pop();
        }
        return ans;
    }
};
