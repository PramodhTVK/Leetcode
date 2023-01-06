class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]=nums[i];
        }
        int res=1;
        for(auto it:nums){
            if(ans.find(it-1)==ans.end()){
            int curr=0;
            int k=it;
            while(ans.find(k++)!=ans.end()){
                curr++;
            }
            res=max(res,curr);
        }
    }
        return res;
    }
};