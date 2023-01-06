class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int count=0;
        for(auto it:nums){
            if(count==0)ele=it;
            if(ele==it)count++;
            else count--;
            
        }
        return ele;
    }
};