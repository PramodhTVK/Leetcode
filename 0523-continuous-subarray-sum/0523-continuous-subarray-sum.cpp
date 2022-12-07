class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=1)return false;
        int sum=0;
        unordered_map<int,int>ans={{0,-1}};
        for(auto it:nums)sum+=it;
        if(sum%k==0)return true;
        sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(ans.find(sum%k)==ans.end()){
                ans[sum%k]=i;
            } 
            else if(i-ans[sum%k]>=2)return true;
        }
        return false;
    }
};