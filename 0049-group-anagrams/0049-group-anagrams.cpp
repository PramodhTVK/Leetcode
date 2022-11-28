class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>ans;
        vector<string>cop;
        vector<vector<string>>res;
        for(auto it : strs){
            cop.push_back(it);
        }
        for(int i=0;i<n;i++){
            sort(cop[i].begin(),cop[i].end());
            ans[cop[i]].push_back(strs[i]);
        }
        for(auto it:ans){
          vector<string>temp=it.second;
            res.push_back(temp);
        }
        return res;
    }
};