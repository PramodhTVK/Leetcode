class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,int>ans;
        for(int i=0;i<n;i++){
            ans[s[i]]++;
        }
      for(int i=0;i<n;i++){
          if(ans[s[i]]==1)return i;
      }
        return -1;
    }
};