class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<3)return -1;
        sort(nums.begin(),nums.end());
        int close=nums[0]+nums[1]+nums[n-1];
        for(int i=0;i<n-2;i++){
                int low=i+1;
                int high=n-1;
                while(low<high){
                    int curr=nums[i]+nums[low]+nums[high];
                    if(curr==target)return curr;
                    if(abs(target-curr)<abs(target-close)){
                        close=curr;
                    }            
                    if(curr>target)high--;
                    else low++;
                }   
            
        }
        return close;
        
    }
};