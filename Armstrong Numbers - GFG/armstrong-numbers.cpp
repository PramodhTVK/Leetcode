//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int sum=0;
        int ans=n;
        int res=0;
        while(n){
            if(res>INT_MAX/10 || res<INT_MIN/10)return "No";
            res=n%10;
            sum+=res*res*res;
            n/=10;
        }
        if(sum==ans)return "Yes";
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends