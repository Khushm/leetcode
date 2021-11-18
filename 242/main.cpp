// Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()){
            for(int i=0; i<s.length(); i++){
                auto it = find(t.begin(), t.end(), s[i]);
                if(it != t.end()){
                    t.erase(it);
                }
            }
            if(!(t.length()))
                return true;
        }
        return false;
    }
};
