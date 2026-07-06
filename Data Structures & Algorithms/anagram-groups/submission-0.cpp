class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> returnArr;
        map<map<char,int>, vector<string>> words;
        for(string s: strs){
            map<char, int> temp;
            for(char c: s){
                temp[c]++;
            }
            words[temp].push_back(s);
        }
        for(auto it = words.begin(); it != words.end(); ++it) {
  
            returnArr.push_back(it->second);
        }
        return returnArr;
    }
};
