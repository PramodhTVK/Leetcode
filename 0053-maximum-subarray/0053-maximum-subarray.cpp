class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_val=INT_MIN;
        for(auto it:nums){
            if(sum<0)sum=0;
            sum+=it;
            max_val=max(max_val,sum);
        }
        return max_val;
    }
};