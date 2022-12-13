class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>ans;
        for(auto a:nums){
            if(ans.find(a)!=ans.end())return true;
            else ans.insert(a);
        }
        return false;
    }
};