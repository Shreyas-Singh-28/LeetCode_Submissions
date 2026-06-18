class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        sort(a.begin(),a.end());
        long long total_mass=mass;
        for(int num:a) {
            if(total_mass>=num) total_mass+=num;
            else return false;
        }
        return true;
    }
};
