class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        int count;
        for(int i = 0; i < s.size(); i++){
        unordered_map<char, int> chars; 
            count = 0;
            for(int c = i; c < s.size(); c++){
                chars[s[c]]++;
                count = std::max(count, chars[s[c]]);
                if((c-i+1) - count <= k){
                    maxLen = std::max(maxLen, c-i+1);
                }
            }
        }
        return maxLen;
    }
};
