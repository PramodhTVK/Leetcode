class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        unordered_map<int,vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i-j].push_back(mat[i][j]);
            }
        }
        for(int k=-m;k<n;k++){
            sort(ans[k].begin(),ans[k].end());
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                mat[i][j]=ans[i-j].back();
                ans[i-j].pop_back();
            }
        }
        return mat;
    }
};