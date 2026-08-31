class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=static_cast<int>(nums.size());
        int min_ind=(min_element(nums.begin(),nums.end())-nums.begin())+1;
        int max_ind=(max_element(nums.begin(),nums.end())-nums.begin())+1;
        if(min_ind>max_ind) swap(min_ind,max_ind);
        return min({max_ind,n-min_ind+1,min_ind+(n-max_ind+1)});
    }
};