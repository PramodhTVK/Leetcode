class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.length();
        unordered_set<char>ans;
        for(int i=0;i<n;i++){
            if(ans.find(s[i])==ans.end())
                ans.insert(s[i]);
            else
                return s[i];
        }
        return s[0];
    }
};