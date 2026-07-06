class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int> smap;
        map<char,int> tmap;
        for (char c : s){
            smap[c]++;
        }
        for (char c : t){
            tmap[c]++;
        }

        return smap == tmap;

    
    }
};
