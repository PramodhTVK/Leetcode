class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        for(i=0,j=0;i<n;i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        for(;j<n;j++){
            nums[j]=0;
        }
    }
};