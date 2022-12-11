class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(s.length()!=t.length())return false;
        unordered_map<char,int>ans;
        for(int i=0;i<n;i++){
            ans[s[i]]++;
            ans[t[i]]--;
        }
        for(auto a:ans)if(a.second)return false;
        return true;
    }
};