class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int>ans;
        ans[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(ans.find(sum-k)!=ans.end())
            {count+=ans[sum-k];}
            ans[sum]++;
        }
        return count;
    }
};