class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_gas=0;
        int total_cost=0;
        for(int i=0;i<n;i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
        }
        if(total_gas<total_cost)return -1;
        int curr_fuel=0;
        int start=0;
        for(int i=0;i<n;i++){
            if(curr_fuel<0){
                curr_fuel=0;
                start=i;
            }
            curr_fuel+=gas[i]-cost[i];
        }
        return start;
    }
};