class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int low=0;
        int high=n-1;
        char ch=s[0];
        while(low<high && s[low]==s[high]){
            while(low<=high && s[low]==ch)low++;
            while(low<=high && s[high]==ch)high--;
            ch=s[low];
        }
        return high-low+1;
    }
};