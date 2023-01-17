class Solution {
public:
    bool isFeasible(vector<int>& weights,int capacity,int D){
        int total=0;
        int days=1;
        for(auto weight:weights){
            total+=weight;
            if(total>capacity){
            total=weight;
            days+=1;
            }
        }
        return days<=D;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max_val=0;
        int sum=0;
        for(auto it:weights){
            max_val=max(max_val,it);
            sum+=it;
        }
        int low=max_val;
        int high=sum;
        while(low<high){
            int mid=low+(high-low)/2;
            if(isFeasible(weights,mid,days))high=mid;
            else low=mid+1;            
        }
        return low;
    }
};