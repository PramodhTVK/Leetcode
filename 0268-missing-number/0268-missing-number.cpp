class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]<n && nums[i]!=nums[nums[i]])swap(nums[i],nums[nums[i]]);
            else i++;
        }
        for(i=0;i<n;i++){
            if( nums[i]!=i)
                return i;
        }
        return n;
    }
};