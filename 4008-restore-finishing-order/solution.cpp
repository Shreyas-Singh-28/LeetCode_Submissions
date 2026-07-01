class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> friends_set;
        vector<int> answer;
        for (int y : friends) {
            friends_set.insert(y);
        }
        for (int x : order) {
            if (friends_set.contains(x)) {
                answer.push_back(x);
            }
        }
        return answer;
    }
};
