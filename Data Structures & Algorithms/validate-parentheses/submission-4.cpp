class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0) return false;
        stack<char> pars;
        for (int i = 0; i < s.size(); i++){
            if( s[i] == '(' || s[i] == '{' || s[i] == '['){
                pars.push(s[i]);
            }
            if (s[i] == ')'){
                if (pars.empty() ||pars.top()!='('){
                    return false;
                }
                pars.pop();
            }
             if (s[i] == '}'){
                if (pars.empty() ||pars.top()!='{'){
                    return false;
                }
                pars.pop();
            }
             if (s[i] == ']'){
                if (pars.empty() ||pars.top()!='['){
                    return false;
                }
                pars.pop();
            }
            
        }
        return pars.empty();
    }
};
