class Solution {
public:
    int appendCharacters(string s, string t) {
        auto curr = t.begin();
        for(int i = 0; i < s.length(); i++){
            if(*curr == s[i]){
                curr++;
                if(curr == t.end()) return 0;
            }
        }
        return std::distance(curr,t.end());
    }
};