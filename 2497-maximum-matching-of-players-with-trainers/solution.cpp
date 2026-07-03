class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int total_players = static_cast<int>(players.size());
        int total_trainers = static_cast<int>(trainers.size());
        int res=0;
        int j=total_trainers-1;
        for(int i=total_players-1;i>=0 && j>=0;i--) {
            if(players[i]<=trainers[j]) {
                res++;
                j--;
            }
        }
        return res;
    }
};
