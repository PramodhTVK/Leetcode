class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int carry=1;
        do{
            carry+=digits[n];
            digits[n--]=carry>9?0:carry;
            carry=carry>9?1:0;
        }while(n>=0 && carry);
        
        if(carry)digits.insert(digits.begin(),carry);
        return digits;
    }
};