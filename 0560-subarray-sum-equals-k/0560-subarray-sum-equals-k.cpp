class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>ans;
        ans[0]=1;
        int count=0;
        for(auto it:nums){
            sum+=it;
            if(ans.find(sum-k)!=ans.end())
                count+=ans[sum-k];
            ans[sum]++;
        }
        return count;
    }
};