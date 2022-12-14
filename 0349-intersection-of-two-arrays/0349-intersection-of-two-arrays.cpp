class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>res;
        vector<int>ans;
        for(auto a:nums1)res.insert(a);
        for(auto a:nums2){
            if(res.find(a)!=res.end())ans.push_back(a);
            res.erase(a);
        }
        return ans;
    }
};