class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)sort(grid[i].begin(),grid[i].end());
        for(int i=0;i<m;i++){
            int max_row=0;
            for(int j=0;j<n;j++){
                max_row=max(max_row,grid[j][i]);
            }
            ans+=max_row;
        }
        return ans;
    }
};