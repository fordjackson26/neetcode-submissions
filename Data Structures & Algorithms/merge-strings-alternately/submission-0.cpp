class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        auto p1 = word1.begin();
        auto p2 = word2.begin();
        string newWord = "";
        while(p1 != word1.end() || p2!=word2.end()){
            if(p1!=word1.end()){
                newWord+=*p1;
                p1++;
            }
            if(p2!=word2.end()){
                newWord+=*p2;
                p2++;
            }

        }
        return newWord;
    }
};