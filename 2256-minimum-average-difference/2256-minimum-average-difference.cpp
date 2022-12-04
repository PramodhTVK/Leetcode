class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long int sumFromend=0;
        long long int sumFrombeg=0;
        int minAvg=INT_MAX;
        int index;
        for(auto it:nums)sumFromend+=it;
        for(int i=0;i<n;i++){
            sumFrombeg+=nums[i];
            sumFromend-=nums[i];
             int a=sumFrombeg/(i+1);
             int b=(i==n-1)?0:sumFromend/(n-i-1);
            
            if(abs(a-b)<minAvg){
                minAvg=abs(a-b);
                index=i;
            }
        }
        return index;
    }
};