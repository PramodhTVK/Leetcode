class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>ans={{0,-1}};
        if(n<2)return false;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(ans.find(rem)==ans.end())
                ans[rem]=i;
            else
                if(i-ans[rem]>=2)return true;
        }
        return false;
    }
};