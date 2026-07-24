class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string subs = "";
        for(int i = 0; i< strs[0].length(); i++){
            char curr = strs[0][i];
            for(string s: strs){
                if(s[i] != curr){
                    return subs;
                }
            }
            subs+=curr;
        }
        return subs;
        
    }
};