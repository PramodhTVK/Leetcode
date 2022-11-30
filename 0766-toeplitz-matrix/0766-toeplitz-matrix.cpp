class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=n-1;i>0;i--){
            for(int j=m-1;j>0;j--){
                if(i>0 && j>0 && matrix[i][j]!=matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};