class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int x=num;
        while(num){
            int res=num%10;
            if(x%res==0)count++;
            num/=10;
        }
        return count;
    }
};