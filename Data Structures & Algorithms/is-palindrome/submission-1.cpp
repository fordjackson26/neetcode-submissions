class Solution {
public:
    bool isPalindrome(string s) {
        //  str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
 s.erase(std::remove_if(s.begin(), s.end(), 
        [](unsigned char c) { return !std::isalnum(c); }), 
        s.end());       
         int size = s.size();
        for(int i = 0; i < size/2 ; i++){
            if (std::tolower(s[i]) != std::tolower(s[size-1-i])){
                return false;
            }
        }
        return true;
    }
};
