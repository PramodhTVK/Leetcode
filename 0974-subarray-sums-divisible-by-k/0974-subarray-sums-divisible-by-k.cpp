class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>ans;
        ans[0]=1;
        int sum=0;
        int count=0;
        for(auto it:nums){
            sum+=it;
            int rem=sum%k;
            if(rem<0)rem+=k;
            if(ans.find(rem)!=ans.end()){
                count+=ans[rem];
            }
            ans[rem]++;
        }
    
    
        return count;
    }
};