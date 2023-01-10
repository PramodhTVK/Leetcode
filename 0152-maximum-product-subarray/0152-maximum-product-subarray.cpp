class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return nums[0];
        int product=1;
        int max_l=0;
        int max_r=0;
        for(int i=0;i<n;i++){
            product*=nums[i];
            max_l=max(max_l,product);
            if(product==0)product=1;
        }
        product=1;
        for(int i=n-1;i>=0;i--){
            product*=nums[i];
            max_r=max(max_r,product);
            if(product==0)product=1;
        }
        return max(max_l,max_r);
    }
};