class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int index;
        for(int i=0;i<n;i++){
        index=abs(nums[i])-1;
        nums[index]*=-1;
            if(nums[index]>0)return abs(nums[i]);
        }
        return 0;
    
    }
};