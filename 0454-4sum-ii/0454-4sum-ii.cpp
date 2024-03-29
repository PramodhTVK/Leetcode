class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        unordered_map<int,int>ans;
        for(int i:nums1){
            for(int j:nums2){
                ans[i+j]++;
            }
        }
        for(int k:nums3){
            for(int l:nums4){
                count+=ans[0-(k+l)];
            }
        }
        return count;
    }
};