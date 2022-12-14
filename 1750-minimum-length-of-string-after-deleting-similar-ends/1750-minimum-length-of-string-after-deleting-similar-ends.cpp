class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int low=0;
        int high=n-1;
        while(low<high){
            if(s[low]==s[high]){
           char ch=s[low];
           while(low<=high && s[low]==ch)low++;
           while(low<=high && s[high]==ch)high--;}
            else{
                return high-low+1;
            }
        }
        return high-low+1;
    }
};