class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
        while(low<mid && nums[low]==nums[low+1])low++;
        while(high>mid && nums[high]==nums[high-1])high--;
            mid=(low+high)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>=nums[low]){
                if(nums[low]<=target && target<=nums[mid])
                    high=mid-1;
                else 
                    low=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }}
        return false;
    }
};