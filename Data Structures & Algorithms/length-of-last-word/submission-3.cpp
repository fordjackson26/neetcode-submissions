class Solution {
public:
    int lengthOfLastWord(string s) {
        int final = 0;
        int curr = 0;
        for(char c : s){
            if(c == ' '){
                if(curr != 0){
                final = curr;
                curr = 0;}
            }else{
            curr++;
            }
        }
        return curr != 0? curr : final;
    }
};