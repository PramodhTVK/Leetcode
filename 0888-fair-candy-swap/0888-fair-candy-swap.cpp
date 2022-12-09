class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int def=(accumulate(aliceSizes.begin(),aliceSizes.end(),0)-accumulate(bobSizes.begin(),bobSizes.end(),0))/2;
        unordered_set<int>ans(aliceSizes.begin(),aliceSizes.end());
        for(int b:bobSizes)
        {if(ans.count(b+def))
                return {b+def,b};}
        return aliceSizes;
    }
};