// Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s = strs.size();
        if(s == 0) return "";
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[s-1];
        string r = "";
        for(int i=0;i<a.size();i++){
            if(a[i] == b[i])
                r += a[i];
            else
                break;
        }
        return r;
    }
};
