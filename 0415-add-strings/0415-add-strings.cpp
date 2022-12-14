class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        long sum=0;
        int carry=0;
        string res="";
        int i=n-1;
        int j=m-1;
        while(i>=0 || j>=0 || carry){
            if(i>=0)sum+=num1[i--]-'0';
            if(j>=0)sum+=num2[j--]-'0';
            sum+=carry;
            carry=sum>9?1:0;
            sum=sum>9?sum-=10:sum;
            res+=to_string(sum);
            sum=0;
        }
       reverse(res.begin(),res.end());
        return res;
    }
};