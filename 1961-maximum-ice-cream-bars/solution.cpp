class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {\
        sort(costs.begin(),costs.end());
        int n=static_cast<int>(costs.size());
        int res=0;
        // 1 1 2 3 4
        for(int i=0;i<n;i++) {\
            if(costs[i]<=coins) {
                res++;
                coins-=costs[i];
            }
        }
        return res;
    }
};
