class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        bool del = false;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return isPalindrome(s, l + 1, r) || isPalindrome(s,l,r-1);
            }
        }
        return true;
        

    }

     bool isPalindrome(string s, int l,  int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};