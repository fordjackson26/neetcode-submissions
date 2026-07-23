class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto curr = s.begin();
        for(int i = 0; i < t.length(); i++){
            if(*curr == t[i]){
                curr++;
                if(curr == s.end()) return true;
            }
        }
        return curr == s.end();
    }
};