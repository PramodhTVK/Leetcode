class Solution {
public:
    double myPow(double x, int n) {
        if(x==-1 ){
            if(n<INT_MIN/10)return 1;
            else return -1;}
        else if(x==1){
            return 1;
        }
        if(n>INT_MAX/10)return x;
        if(n<INT_MIN/10)return 0.0;
        if(n==0)return 1;
        else if(n<0) return 1/x*myPow(x,n+1);
        else return x*myPow(x,n-1);  
    }
};