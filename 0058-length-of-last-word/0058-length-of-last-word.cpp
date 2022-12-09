class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int high=n-1;
        int i=n-1;
        int count=0;
        while(i>=0 && s[i--]==' ')high--;
        i=high;
        while(i>=0 && s[i--]!=' ')count++;
        return count;
    }
};