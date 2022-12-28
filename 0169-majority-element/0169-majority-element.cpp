class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int count=0;
        for(auto it:nums){
            if(count==0)ele=it;
            if(ele==it)count++;
            else count--;   
        }
        return ele;
    }
};