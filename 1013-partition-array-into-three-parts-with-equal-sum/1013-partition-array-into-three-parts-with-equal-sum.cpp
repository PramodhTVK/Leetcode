class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%3!=0)return false;
        sum/=3;
        int part=0;
        int part_sum=0;
        for(int i=0;i<n;i++){
            part_sum+=arr[i];
            if(part_sum==sum)
            {part++;
             part_sum=0;}
        }
        return part>=3;
    }
};