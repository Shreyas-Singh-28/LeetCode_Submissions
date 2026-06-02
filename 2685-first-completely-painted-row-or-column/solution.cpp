class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        unordered_map<int,vector<int>> mymap;
        vector<int> row(m,0);
        vector<int> col(n,0);
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                mymap[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<m*n;i++) {
            int ele=arr[i];
            int first=mymap[ele][0];
            int second=mymap[ele][1];
            row[first]++;
            col[second]++;
            if(row[first]>=n || col[second]>=m) return i;
        }
        return 0;
    }
};
