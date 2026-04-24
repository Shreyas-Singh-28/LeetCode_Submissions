class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        long long n=nums.size();
        vector<long long> res(n);
        vector<long long> left(n,0);
        vector<long long> right(n,0);
        unordered_map<long long,long long> freq;
        unordered_map<long long,long long> last;
        for(int i=0;i<n;i++) {
            if(freq.count(nums[i])==0) {
                freq[nums[i]]++;
                last[nums[i]]=i;
            }
            else{
                left[i]=freq[nums[i]]*(i-last[nums[i]])+left[last[nums[i]]];
                freq[nums[i]]++;
                last[nums[i]]=i;
            }
        }
        freq.clear();
        last.clear();
        for(int i=n-1;i>=0;i--) {
            if(freq.count(nums[i])==0) {
                freq[nums[i]]++;
                last[nums[i]]=i;
                // cout<<"After updating: "<<freq[nums[i]]<<" "<<last[nums[i]]<<"\n";
            }
            else{
                right[i]=freq[nums[i]]*(last[nums[i]]-i)+right[last[nums[i]]];
                freq[nums[i]]++;
                last[nums[i]]=i;
                // cout<<"After updating: "<<freq[nums[i]]<<" "<<last[nums[i]]<<" "<<right[i]<<'\n';
            }
        }
        for(int i=0;i<n;i++) {
            res[i]=left[i]+right[i];
        }
        return res;
    }
};
