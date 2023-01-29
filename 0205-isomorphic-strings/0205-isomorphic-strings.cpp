class Solution {
public:
    struct defaultVal{
        int val=-1;
    };
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m)return false;
        unordered_map<char,defaultVal>ans1;
        unordered_map<char,defaultVal>ans2;
        for(int i=0;i<n;i++){
            if(ans1[s[i]].val!=ans2[t[i]].val)return false;
            ans1[s[i]].val=i;
            ans2[t[i]].val=i;
        }
        return true;
    }
};