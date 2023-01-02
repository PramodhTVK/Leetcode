class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int res=0;
        int ans=x;
        while(x){
            if(res>INT_MAX/10 || res<INT_MIN/10)return false;
            else{
                res=res*10+x%10;
            }
            x/=10;
        }
        return res==ans;
    }
};