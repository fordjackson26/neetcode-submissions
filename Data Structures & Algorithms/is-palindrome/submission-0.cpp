class Solution {
public:
    bool isPalindrome(string s) {
        auto start = s.begin();
        auto end = s.end()--;
        while(start < end){
            while (!alphaNum(*start) && start < end){
                start++;
            }
            while (!alphaNum(*end) && start < end){
                end--;
            }
            if (tolower(*start) != tolower(*end) ){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }

};
