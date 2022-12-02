class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int low=0;
        int high=n-1;
        string temp="";
        string ans="";
        while(low<=high){
            char ch=s[low];
            if(ch!=' ')temp+=ch;
            if(ch==' '){
                if(temp!="" && ans!="")ans=temp+" "+ans;
                else ans+=temp;
                temp="";
            }
            low++;
        }
        if(temp!="" && ans!="")ans=temp+" "+ans;
        else ans+=temp;
        
        return ans;
    }
};