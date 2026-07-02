class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=static_cast<int>(image.size());
        for(auto &vec:image) {
            int l=0,r=n-1;
            while(l<r) {
                if(vec[l]==vec[r]) {
                    if(vec[l]==0) {
                        vec[l]=1;
                        vec[r]=1;
                    }
                    else {
                        vec[l]=0;
                        vec[r]=0;
                    }
                }
                l++;
                r--;
            }
            if(l==r) {
                if(vec[l]==0) vec[l]=1;
                else vec[l]=0;
            }
        }
        return image;
    }
};
