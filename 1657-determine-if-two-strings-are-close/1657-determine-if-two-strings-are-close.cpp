class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(n!=m)return false;
        set<int>count_1;
        set<int>count_2;
        for(auto it:word1){
            count_1.insert(it-'a');
        }
        for(auto it:word2){
            count_2.insert(it-'a');
        }
        if(count_1!=count_2)return false;
        unordered_map<char,int>w_1;
        unordered_map<char,int>w_2;
        for(auto it:word1){
            w_1[it]++;
        }
        for(auto it:word2){
            w_2[it]++;
        }
       int i,j;
        vector<int>word_1;
        vector<int>word_2;
        for(auto it:w_1)word_1.push_back(it.second);
        for(auto it:w_2)word_2.push_back(it.second);
        sort(word_1.begin(),word_1.end());
        sort(word_2.begin(),word_2.end());
        for(i=0,j=0;i<word_1.size(),j<word_2.size();i++,j++){
            if(word_1[i]!=word_2[j])return false;
        }
        return count_1==count_2 && i==j;
    }
};