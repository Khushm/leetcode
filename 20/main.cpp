// Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        for(int i=0;i<s.length(); i++){
            // if(v.size() != 0) cout << s[i] << v.back();
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') v.push_back(s[i]);
            else if(v.size() != 0 && (s[i] == ')' && v.back() == '(' || 
                    s[i] == ']' && v.back() == '[' ||
                    s[i] == '}' && v.back() == '{')){
                v.pop_back();
            }
            else return false;
        }
        if(v.size() == 0) return true;
        return false;
    }
};
