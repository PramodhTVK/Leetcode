class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        set<char>ans={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int a=0;
        for(int i=0,j=n-1;i<j;i++,j--){
            if(ans.find(s[i])!=ans.end())a++;
            if(ans.find(s[j])!=ans.end())a--;
        }
          return a==0;
    }
};