// Implement strStr()
class Solution {
public:
    int strStr(string haystack, string needle) {
        int at = haystack.find(needle);
        if(at != string::npos){
            return at;
        }
        return -1;
    }
};
