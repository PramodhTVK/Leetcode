class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n=nums.size();
        unordered_map<int,int>ans;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(ans.find(target-nums[i])!=ans.end()){
                res.push_back(ans[target-nums[i]]);
                res.push_back(i);
            }
            ans[nums[i]]=i;
        }
        return res;
    }
};