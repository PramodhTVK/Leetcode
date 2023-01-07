class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1;
                int r=n-1;
                long long rem=target-nums[i]-nums[j];
                while(l<r){
                    if(nums[l]+nums[r]==rem){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        ans.push_back(temp);
                        while(l<r && nums[l]==nums[l+1])l++;
                        while(l<r && nums[r]==nums[r-1])r--;
                        l++;
                        r--;
                    }
                    else if(nums[l]+nums[r]>rem)r--;
                    else l++;
                      }
                while(j+1<n && nums[j]==nums[j+1])j++;
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};