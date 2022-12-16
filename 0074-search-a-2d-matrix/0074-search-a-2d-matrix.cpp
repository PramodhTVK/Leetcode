class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=m*n-1;
        while(low<=high){
            int mid=(high+low)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target)return true;
            else if(matrix[row][col]>target)high--;
            else low++;
        }
        return false;
    }
};