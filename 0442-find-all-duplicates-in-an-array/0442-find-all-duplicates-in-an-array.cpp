class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int idx;
        for(int i=0;i<n;i++){
            idx=abs(nums[i])-1;
            if(idx>=0 && idx<n && nums[idx]>0)
            nums[idx]*=-1;
            else if(nums[idx]<0)
                ans.push_back(abs(nums[i]));
            }
        return ans;
    }
};