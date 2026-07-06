class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        set<char> vals; 
        for (int i = 0; i < s.size(); i++){
            vals.clear();
            for(int c = i; c < s.size(); c++){
                if(vals.find(s[c])!= vals.end()){
                    break;
                }
                vals.insert(s[c]);
            }
            maxLen = std::max(maxLen, (int)vals.size());
        }
        return maxLen;
    }
};
