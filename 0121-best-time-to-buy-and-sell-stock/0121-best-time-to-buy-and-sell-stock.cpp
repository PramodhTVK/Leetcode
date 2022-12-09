class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ele=prices[0];
        int profit=0;
        for(int i=0;i<n;i++){
            if(prices[i]-ele<0)ele=prices[i];
            profit=max(profit,prices[i]-ele);     
        }
        return profit;
    }
};