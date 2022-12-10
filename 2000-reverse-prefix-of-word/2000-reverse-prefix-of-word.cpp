class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        size_t index=word.find(ch);
        if(index!=string::npos){
            reverse(word.begin(),word.begin()+index+1);
        }
        return word;
    }
};