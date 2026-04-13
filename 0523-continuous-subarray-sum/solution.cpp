// class Solution {
// public:
//     bool checkSubarraySum(vector<long long>& nums, int k) {
//         vector<long long> pref(n+1);
//         pref[0]=0;
//         int n=nums.size();
//         for(int i=1;i<n;i++) pref[i]=pref[i-1]+nums[i-1];
//         unordered_map<int,int> m;
//         m[0]++;
//         for(int i=1;i<n;i++) {
//             int x=pref[i]-k;
//             if(m.find(x)) {

//             }
//         } 
//     }
// };

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        //if(n==1) return (nums[0]%k)==0;
        // if(n==2) return (nums[0]+nums[1])%k==0;
        int prefix=0;
        unordered_map<int,int> seen;
        seen[0]=-1;
        // prefix+=nums[0];
        // int x=prefix%k;
        // freq[x]++;
        for(int i=0;i<n;i++) {
            prefix+=nums[i];
            int x=prefix%k;
            if(seen.count(x) && i-seen[x]>=2) return true;
            if(!seen.count(x)) seen[x]=i;
        }
        return false;
    }
};
