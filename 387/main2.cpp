// First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> v;
        string s1 = s;
        char c;
        for(int i=0;i<s.length(); i++){
            s1 = s;
            c = s[i];
            s1.erase(s1.begin()+i);
            if(s1.find(c) == string::npos)
                return i;
        }
        return -1;
    }
};
