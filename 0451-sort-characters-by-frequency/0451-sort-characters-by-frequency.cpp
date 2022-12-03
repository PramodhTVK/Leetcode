class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>ans;
        for(int i=0;i<n;i++){
            ans[s[i]]++;
        }
        map<int,string>res;
        for(auto it:ans){
           char c=it.first;
           int n=it.second;
            res[n]+=string(n,c);
        }
        string ans_1="";
        for(auto i=res.rbegin();i!=res.rend();i++){
            ans_1+=i->second;
        }
        return ans_1;
        
    }
};