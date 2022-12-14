class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<n-2;i++){
            if(i==0||i>0 && nums[i]!=nums[i-1]){
            int negv=-(nums[i]);
            int low=i+1;
            int high=n-1;
            while(low<high){
                if(nums[low]+nums[high]==negv){
                    vector<int>temp;
                    temp.push_back(nums[low]);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[high]);
                    res.push_back(temp);
                    
            while(low<high && nums[low]==nums[low+1])low++;
            while(low<high && nums[high]==nums[high-1])high--;
            low++;
            high--;   
                }
                else if(nums[low]+nums[high]>negv)high--;
                else low++;}   
        }}
        return res;
    }
};