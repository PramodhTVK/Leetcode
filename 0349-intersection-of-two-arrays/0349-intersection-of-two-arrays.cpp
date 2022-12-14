class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        set<int>res;
        vector<int>resu;
        unordered_set<int>ans;
        for(auto a:nums1)ans.insert(a);
        for(auto a:nums2){
            if(ans.find(a)!=ans.end())res.insert(a);
        }
        for(auto a:res)resu.push_back(a);
        return resu;
    }
};