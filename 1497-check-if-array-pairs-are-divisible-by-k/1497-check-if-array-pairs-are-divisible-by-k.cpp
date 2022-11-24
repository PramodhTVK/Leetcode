class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        if(n<2)return false;
        unordered_map<int,int>ans;
        for(auto it:arr)ans[((it%k)+k)%k]++;
        for(auto it:arr){
            int rem=(it%k+k)%k;
            if(rem==0){
                if(ans[rem]%2!=0)return false;
            }
            else if(ans[rem]!=ans[k-rem])return false;
        }
        return true;
    }
};