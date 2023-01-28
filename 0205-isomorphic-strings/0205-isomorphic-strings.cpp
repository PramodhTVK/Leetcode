class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m)return false;
        unordered_map<char,int>ans1;
        unordered_map<char,int>ans2;
        for(int i=0;i<n;i++){
            if(ans1[s[i]]!=ans2[t[i]])return false;
            ans1[s[i]]=i+1;
            ans2[t[i]]=i+1;
        }
        return true;
    }
};